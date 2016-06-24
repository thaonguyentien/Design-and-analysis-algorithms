/*
Name:CD
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:dung 2 mang de luu 2 tap dia CD cua jack va jill . dap xep 2 mang do. sau do tu 2 mang tim cac phan tu khac nhau cua 2 mang
Date and time :16h22/06
*/
#include<cstdio>
#include<fstream>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<conio.h>

using namespace std;
#define max 10000
inline
void use_io_optimizations()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
}

void seperate2(string str, string &t1, string &t2) {
	int i = 0, c = 0, j = 0;
	while (str[i++] != ' ') {
		c++;
	}
	t1 = str.substr(j, c);
	j = i;
	c = 0;
	while (str[i++] != '\0') {
		c++;
	}
	t2 = str.substr(j, c);
	//n = atoi(t1.c_str());
	//k = atoi(t2.c_str());
}
int main() {
	use_io_optimizations();
	fstream fi, fo;
	string str,t1,t2,t;
	int a[max], b[max];
	int n, k;
	int cnt = 0;

	fi.open("input.txt",ios::in);
	fo.open("output.txt", ios::out);
	getline(fi, str);
	while (str != "0 0") {
		cnt = 0;
		seperate2(str, t1, t2);
		n = atoi(t1.c_str());
		k = atoi(t2.c_str());
		for (int i = 0; i < n; ++i) {
			getline(fi, t);
			a[i] = atoi(t.c_str());
		}
		for (int i = 0; i < k; ++i) {
			getline(fi, t);
			b[i] = atoi(t.c_str());
		}
		//fo << n << k << endl;
		sort(a, a + n);
		sort(b, b + k);
		int j = 0,i=0;
		int ii=0, jj=0;
		/*while (i != n && j != k) {
			if (a[i] == b[j]) {
				ii = i;
				jj = j;
				break;
			}else{
				if (a[i] > b[j]) j++;
				else i++;
			}
		}
		//for (int i = 0; i < n; ++i) fo << a[i]<<"  "; fo << endl<<endl;
		//for (int i = 0; i < k; ++i) fo << b[i]<<"  "; fo << endl<<endl;
		//fo << "iijj" << ii << jj<<endl;
		//fo << endl<<"bang nhau"<<endl;
		//for (int i = ii; i < n; ++i) fo << a[i] << "  "; fo << endl<<endl;
		//for (int i = jj; i < k; ++i) fo << b[i] << "  "; fo << endl<<endl;
		while (ii != n&&jj != k) {
			if (a[ii] == b[jj]) cnt++;
			else break;
			ii++;
			jj++;
		}*/
		while (i != n&&j != k) {
			if (a[i] == b[j]) {
				cnt++;
				i++;
				j++;
			}
			else if (a[i] > b[j]) j++;
			else i++;
		}
		fo << cnt << "\n";
		getline(fi, str);
	}
	return 0;
}