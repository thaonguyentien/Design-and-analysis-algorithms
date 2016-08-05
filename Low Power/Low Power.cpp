/*
Name:Low power
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:nhap cac gia tri cua pin de bai cho vao mot mang.
sap xep mang do theo thu tu tang dan. ta se tim tu gia tri (a[1]-a[0]+a[len-1])/2 
cho den khi tim thay, ta se tim bang cach chia nho cac doan ra. co chut gi do 
tuong tu tim kiem nhi phan nhung day khong phai la tim kiem bang.
Date and time :24/07/2016 20h
*/

#include<cstdio>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>
#include<vector>
#include<time.h>
#include<map>


using namespace std;

int n, k, len;
int a[1000001];
inline
void use_io_optimizations()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
}

int find(int mi) {
	use_io_optimizations();
	int i, max = 0, now = 0;
	for(int i=0;i<n;++i) {
		while (now <= max) {
			if (a[now + 1] - a[now] <= mi) {
				break;
			}
			now++;
		}
		if (now > max) {
			return 0;
		}
		now += 2;
		max += 2*k;
	}
	return 1;
}

int main() {
	int i;
	cin >> n >> k;
	len = 2 * n*k;
	for (int i = 0; i < len; ++i) {
		cin >> a[i];
	}
		sort(a, a + len);
		int f= a[1] - a[0], e= a[len - 1], mi;
		while (f< e) {
			mi = (f+e)/2;
			if (find(mi))  e = mi; 
			else  f = mi + 1; 
		}
		printf("%d\n", f);
	
	
}