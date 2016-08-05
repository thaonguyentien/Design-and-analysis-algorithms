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

inline
void use_io_optimizations()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
}

void decrea(int coin[], int &paid, int &index1, int &index2,int price) {
	while (paid > price) {
		paid -= coin[index1];
		if (paid < price) {
			paid += coin[index1];
			return;
		}
		else index1++;
	}
}
int main() {
	use_io_optimizations();
	int n, amount, price;
	int	coin[10000];
	cin >> n;
	cin >> price;
	cin >> amount;
	for (int N = 0; N < n; ++N) {
		for (int i = 0; i < amount; ++i) {
			cin >> coin[i];
		}
		sort(coin, coin + amount);
		int paid = coin[0];
		int index1 = 0, index2, index_temp;
		if (coin[0] > price) {
			cout << coin[0] << " " << "1" << endl;
			return 0;
		}
		else {
			for (int i = 1; i < amount; ++i) {
				paid += coin[i];
				index2 = i;
				if (paid > price) {
					decrea(coin, paid, index1, index2,price);
					break;
				}
			}
		}
		cout << paid << " " << index2 - index1 << endl;
	}
	cin >> n;
	return	0;
}