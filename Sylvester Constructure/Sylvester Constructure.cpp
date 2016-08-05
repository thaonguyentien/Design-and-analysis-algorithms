/*
Name:Sylvester Constructure
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description: chu y thu tu hang va cot hoi nguoc
Date and time : 03/07/2016	8h
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
	

unsigned int ii[63], jj[63];
void binary(unsigned int arr[], unsigned int i);
void binary(unsigned int arr[], unsigned int i) {
	int cnt = 62;
	while (i != 0) {
		arr[cnt--] = i % 2;
		i /= 2;
	}
}
int tim_mu(unsigned int i, unsigned int j) {
	for (int k = 0; k < 63; ++k) ii[k] = jj[k] = 0;
	binary(ii, i);
	binary(jj, j);
	int m = 0;
	for (int index = 0; index < 63; index++) {
		if (ii[index] == 1 && jj[index] == 1) m++;
	}
	return m;
}
int main() {
	use_io_optimizations();
	int n, i, j, col, row,temp;
	cin >> n;
	for (int k = 0; k < n; ++k) {
		cin >> temp>>j>>i>>col>>row;
		for (int kk = 0; kk < row; kk++) {
			for (int kkk = 0; kkk < col; kkk++) {
				int mu=tim_mu(i + kk, j + kkk);
				if (mu % 2 == 0) cout << "1 ";
				else cout << "-1 ";
			}	
			cout << endl;
		}
		cout << endl;
	}
	/*for (int k = 0; k < 63; ++k) {
		ii[k] == jj[k] == 0;
	}
	int mu = tim_mu(3, 2);
	for (int k = 0; k < 63; ++k) {
		cout << ii[k] << " ";
	}
	cout << endl;
	for (int k = 0; k < 63; ++k) {
		cout << jj[k] << " ";
	}
	cout << endl;
	
	cout << mu;*/
	int get;
	cin >> get;
	return 0;
}