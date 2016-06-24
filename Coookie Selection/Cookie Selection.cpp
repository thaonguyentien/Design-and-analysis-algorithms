/*
Name:Cookies Selection
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:su dung mot mang de luu cac gia tri neu giam gia tri khac # thi dua vao mang
neu gap # thi sap xep mang do va dua ra gia tri can tim. su dung mot bien index de luu tru cac gia tri hien
co trong mang.
Date and time :16h 23/06/2016
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
int compare(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}
int main() {
	use_io_optimizations();
	fstream fi, fo;
	unsigned int  a[3000];
	int cnt = 0,index=0;
	fi.open("input.txt", ios::in);
	fo.open("output.txt", ios::out);
	string temp;
	getline(cin, temp);
	while (temp!="\0") {
		if (temp == "#") {
			
			sort(a, a+cnt);
			//cout << "mang ";
			//for (int i = 0; i < index ; ++i) cout << a[i]<<" ";
			//cout << endl;
			if (index % 2 == 0) {
				//cout << "index=" << index<<endl;
				cout << a[(index / 2) ] << endl;
				a[(index / 2) ] = 300000000;
				index--;
			}
			else {
				//cout << "mang ";
				//for (int i = 0; i < index; ++i) cout << a[i] << " ";
				//cout << endl;
				cout << a[(index + 1) / 2-1] << endl;
				a[(index + 1) / 2-1] = 300000000;
				index--;
			}
		}
		else {

			a[cnt++] = atoi(temp.c_str());
			index++;
			//cout << "mang ";
			//for (int i = 0; i < index; ++i) cout << a[i] << " ";
			//cout << endl;
			//index++;
		}
		getline(cin, temp);
	}
	
	return 0;
}