/*
Name:Obama Sort
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:
Date and time :01/7/2016 9h30
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

int main() {
	use_io_optimizations();
	int a[250004];
	fstream fi, fo, fi1, fo1, fo2;
	fi.open("sort3mb.inp", ios::in);
	fo1.open("sort3mb1.out", ios::out);
	fo.open("sort3mb.out", ios::out);
	int n;
	fi >> n;
	//cout << n;
	//cin >> n;
	for (int i = 0; i < n/2; ++i) {
		fi>>a[i];
	}
	sort(a, a + n / 2);
	
	for (int i = 0; i < n / 2; ++i) {
		fo1 << a[i]<<endl;
	}
	int index = 0;
	for (int i = n / 2; i < n; ++i) {
		fi >> a[index++];
	}

	sort(a, a + index);
	//fo1 << endl << "nua mang con lai " << endl;
	//for (int i = 0; i < index; ++i) {
	//	fo1 << a[i]<<" ";
	//}
	fi1.open("sort3mb1.out", ios::in);
	int i2 = n/2, i1 = 0;
	index = 0;
	int temp;
	fi1 >> temp;
	while (i1 != n/2 && i2!=n ) {
		if (temp > a[i2]) {
			fo << a[i2-n/2]<<endl;
			i2++;
		}
		else {
			fo << temp << endl;
			fi1 >> temp;
			i1++;
		}
	}
	for (int i = i1; i < n / 2; ++i) {
		fi1 >> temp;
		fo <<temp << endl;
	}
	for (int i = i2; i < n; ++i) {
		fo << a[i] << endl;
	}
	fo.close();
	fi.close();
	fi1.close();
	fo1.close();
	return 0;
}