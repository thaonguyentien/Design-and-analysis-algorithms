/*
Name:
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:
Date and time :
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

const int inf = 10000;
int v[100], memo[10000][100], n;
fstream fo;
int dp(int p, int i) {
	
	if (p < 0) return inf;
	if (p == 0) return 0;
	if (i >= n) return inf;

	if (memo[p][i] != -1) return memo[p][i];

	int val = inf;
	val = 1 + min(val, dp(p - v[i], i + 1));
	val = min(val, dp(p, i + 1));

	memo[p][i] = val;
	return memo[p][i];
}

int main() {
	int TC;
	fo.open("output.txt", ios::out);

	scanf_s("%d\n", &TC);
	while (TC--) {
		int p;
		memset(memo, -1, sizeof memo);
		scanf_s("%d\n%d\n", &p, &n);
		for (int i = 0; i < n; i++) {
			scanf_s("%d", &v[i]);
		}

		// int p = sum/2;
		int out = dp(p, 0);

		while (out == inf) {
			p++;
			out = dp(p, 0);
		}
		for (int o = 0; o < 10000; ++o) {
			for (int k = 0; k < 100; ++k)
				fo << memo[o][k];
			fo << endl;
		}
		fo << endl << endl;
		printf("%d %d\n", p, out);
	}
}