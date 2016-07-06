/*
Name:Natjecanje
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description: dung mot mang de thoi gian bat dau cua cac doi co kayaks du tru (reserve_arr)va mot mang de luu 
thoi gian bat dau cua cac doi co kayaks bi hong(damege_arr). voi moi doi co kayak bi hong tim cac doi co kayaks du 
xem thoi gian cua ho co cach nhau 1 khong. luu y sau khi kayaks cua mot doi du duoc mot doi khac muon thi kayaks do khong
the duoc muon boi doi khac
Date and time :02/07/2016 8h
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
	int total, damaged, reserve;
	int damaged_arr[10], reserve_arr[10];
	cin >> total;
	cin >> damaged;
	cin >> reserve;
	for (int i = 0; i < damaged; ++i) {
		cin >> damaged_arr[i];
	}
	sort(damaged_arr, damaged_arr + damaged);
	for (int i = 0; i < reserve; ++i) {
		cin >> reserve_arr[i];
	}
	int cnt = 0;
	for (int i = 0; i < damaged; ++i) {
		sort(reserve_arr, reserve_arr + reserve);
		for (int j = 0; j < reserve; ++j) {
			if (reserve_arr[j] == (damaged_arr[i] + 1) || reserve_arr[j] == (damaged_arr[i] - 1)) {
				reserve_arr[j] = -1;
				break;
			}
			
			if (damaged_arr[i] > (reserve_arr[reserve-1] + 1)) {
				cnt++;
				break;
			}
			if (j == reserve-1 ) cnt++;
		}
	}
	cout << cnt;
	cin >> cnt;
	return 0;
}