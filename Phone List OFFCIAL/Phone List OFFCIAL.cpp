/*
Name:Phone list			
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description: dung mot mang de luu tat ca cac so dien thoai co trong danh ba.
sap xep mang do. Lam luot di tung phan tu cua mang neu phan tu thu i+1 chua phan tu thu i thi dua ra la NO
neu den het mang ma ko co thi dua ra YES
Date and time :12h 26/03/16
*/

#include<cstdio>
#include<fstream>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<time.h>

using namespace std;

inline
void use_io_optimizations()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
}

bool compare(string str1, string str2) {
	if (str2.size() >= str1.size()) {
		for (int i = 0; i < str1.size(); ++i) {
			if (str1[i] != str2[i]) {
				return false;
			}
		}
		return true;
	}
	return false;
}
int main() {
	use_io_optimizations();
	fstream fi, fo;
	fi.open("input.txt", ios::in);
	fo.open("output.txt", ios::out);
	string arr[10001];
	int time, contacts;
	fi >> time;
	for (int i = 0; i < time; ++i) {
		fi >> contacts;
		for (int j = 0; j < contacts; ++j) {
			fi >> arr[j];
		}
		//for (int j = 0; j < contacts; ++j) fo << arr[j]<<" ";
		sort(arr, arr + contacts);
		bool flag = true;
		for (int j = 0; j < contacts-1; ++j) {
			if (compare(arr[j], arr[j + 1])) {
				flag = false;
				break;
			}
		}
		if (flag == true) fo << "YES" << endl;
		else fo << "NO" << endl;
	}
	return 0;
}