/*
Name:Radio commercials
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description: su dung mot mang de luu cac hoc sinh. voi moi phan tu cua mang ta tru di 
P la gia chuyen u.  quy ve bai toan tim day con lon nhat
Date and time : 14h 16/07/2016
/*/

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

int main() {
	int students[100000];
	use_io_optimizations();
	int N, P,temp;
	cin >> N >> P;
	for (int i = 0; i < N; ++i) {
		cin >> temp;
		students[i] = temp - P;
	}
	int smax = students[0];
	int max_end_here = students[0];
	int imax = 0;
	int u, v;
	for (int i = 1; i < N; ++i) {
		u = max_end_here + students[i];
		v = students[i];
		if (u > v) max_end_here = u;
		else max_end_here = v;
		if (max_end_here > smax) {
			smax = max_end_here;
			imax = i;
		}
	}
	cout << smax << endl;
	return 0;
}