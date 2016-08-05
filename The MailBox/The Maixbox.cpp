/*
Name:The Mailbox
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:dung de quy de su ly cac bai toan nho de quy ve bai toan lon. cu the ta bat dau tu bai toan
lon nhat k,1,m sau do goi den cac bai toan nho hon. tim ra loi giai co so phao su dung lon nhat 
trong cach thu tot nhat.
Date and time :17/07/2016
*/

#include<cstdio>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>
#include<vector>
#include<time.h>

using namespace std;
int memo[11][101][101];
int solve(int n, int a, int b) {
	if (a>b) return 0;
	if (memo[n][a][b] != -1) return memo[n][a][b];

	if (n == 1) memo[n][a][b] = b*(b + 1) / 2 - (a - 1)*a / 2;
	else {
		int aux = INT_MAX;
		for (int i = a; i <= b; i++) aux = min(aux, i + max(solve(n - 1, a, i - 1), solve(n, i + 1, b)));
		memo[n][a][b] = aux;
	}

	return memo[n][a][b];
}
inline
void use_io_optimizations()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
}

int main() {
	use_io_optimizations();
	int N, k, m;

	scanf_s("%d", &N);

	memset(memo, -1, sizeof(memo));

	for (int n = 0; n<N; n++) {
		scanf_s("%d %d", &k, &m);

		printf("%d\n", solve(k, 1, m));
	}
	return 0;
}