/*
Name:Planint tree
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:nhap thoi gian de cay truong thanh vao mot mang a. 
su dung mang b de luu thoi gian cua cac cay cho toi luc truong tinh . moc thoi gian ban dau tinh tu thoi diem cay dau tien trong.
nhan thay cac trong de co thoi gian cac cay truong thanh muon nhat la som nhat la ta sap xep cac cay theo thu tu ngay truong thanh
cay nao co thoi gian truong thanh dai nhat t se trong dau tien .
vay ra tri can tim se la max cua mang b
Date and time : 19/07/2016	20h
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
	int n;
	int a[10000000], b[10000000];
	cin >> n;
	for (int i = 0; i<n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i<n; ++i) {
		b[i] = a[n - i - 1] + i + 1;
	}
	int max = b[0];
	for (int i = 1; i<n; ++i) {
		if (b[i]>max) max = b[i];
	}
	cout << max + 1 << endl;
	return 0;
}