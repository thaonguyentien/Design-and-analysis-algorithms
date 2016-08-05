/*
Name:Bank queue
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:luu cac cap thoi gian va tien gui vao mot mang que. sap xep mang do theo 
thu tu tien gui giam dan. su dung mot mang q de luu xem tai thoi diem nao da ngan hang
co nguoi gui tien chua. lan luot di tu nhung nguoi cao tien nhat uu tien xep cho ho thoi
gian gui muon nhat ho co the cho ma ngan hang con ranh. cuoi cung chi can tinh tong mang q.
Date and time :20/07/2016 9h
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

inline
void use_io_optimizations()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
}
typedef pair<int, int> bank_queue;
int main() {
	use_io_optimizations();
	bank_queue que[100000];
	int n, close_time;
	cin >> n >> close_time;
	for (int i = 0; i < n; ++i) {
		cin >> que[i].first >> que[i].second;
	}
	
	sort(que, que + n);
	//for (int i = 0; i < n; ++i) {
	//	cout << que[i].first << "  " << que[i].second << endl;
	//	cout << endl;
	//}
	int q[48];
	for (int i = 0; i <= close_time; ++i) {
		q[i] = 0;
	}
	for (int i = n-1; i >= 0; --i) {
		while (q[que[i].second]) {
			que[i].second--;
		}
		
		if (que[i].second >= 0 && que[i].second < close_time) q[que[i].second] = que[i].first;
	}
	int total = 0;
	for (int i = 0; i < close_time; ++i) {
		//cout << q[i] << endl;
		total += q[i];
	}
	cout << total<<endl;
	// >> n;
	return 0;
}