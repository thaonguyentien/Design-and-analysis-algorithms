/*
Name:Booking
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:
Date and time :16h 25/06/2016
*/

#include<cstdio>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>
#include<vector>
#include<time.h>
#include<conio.h>
using namespace std;

inline
void use_io_optimizations()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
}
unsigned int time(int year,int month,int day,int hour,int minute) {
	if (month == 1) {
		unsigned int t = (year - 2013) * 525600 + day * 24 * 60 + hour * 60 + minute;
		if (t > 1663200) t += 1440;
		return t;
	}
	else 	if (month == 2) {
		unsigned int t = (year - 2013) * 525600 + 44640+day * 24 * 60 + hour * 60 + minute;
		if (t > 1663200) t += 1440;
		return t;
	}
	else 	if (month == 3) {
		unsigned int t = (year - 2013) * 525600 + 84960 + day * 24 * 60 + hour * 60 + minute;
		if (t > 1663200) t += 1440;
		return t;
	}
	else 	if (month == 4) {
		unsigned int t = (year - 2013) * 525600 + 129600 + day * 24 * 60 + hour * 60 + minute;
		if (t > 1663200) t += 1440;
		return t;
	}
	else 	if (month == 5) {
		unsigned int t = (year - 2013) * 525600 + 172800 + day * 24 * 60 + hour * 60 + minute;
		if (t > 1663200) t += 1440;
		return t;
	}
	else 	if (month == 6) {
		unsigned int t = (year - 2013) * 525600 + 271440 + day * 24 * 60 + hour * 60 + minute;
		if (t > 1663200) t += 1440;
		return t;
	}
	else 	if (month == 7) {
		unsigned int t = (year - 2013) * 525600 + 260640 + day * 24 * 60 + hour * 60 + minute;
		if (t > 1663200) t += 1440;
		return t;
	}
	else 	if (month == 8) {
		unsigned int t = (year - 2013) * 525600 + 305280 + day * 24 * 60 + hour * 60 + minute;
		if (t > 1663200) t += 1440;
		return t;
	}
	else 	if (month == 9) {
		unsigned int t = (year - 2013) * 525600 + 349920 + day * 24 * 60 + hour * 60 + minute;
		if (t > 1663200) t += 1440;
		return t;
	}
	else 	if (month == 10) {
		unsigned int t = (year - 2013) * 525600 + 393120 + day * 24 * 60 + hour * 60 + minute;
		if (t > 1663200) t += 1440;
		return t;
	}
	else 	if (month == 11) {
		unsigned int t = (year - 2013) * 525600 + 437760 + day * 24 * 60 + hour * 60 + minute;
		if (t > 1663200) t += 1440;
		return t;
	}
	else 	if (month == 12) {
		unsigned int t = (year - 2013) * 525600 + 480960 + day * 24 * 60 + hour * 60 + minute;
		if (t > 1663200) t += 1440;
		return t;
	}
}
int main() {
	//int a, b, c, d, e, f;
	use_io_optimizations();
	fstream fi, fo;
	unsigned int time1;
	unsigned int booking_in[5000],booking_out[5000];
	fi.open("input.txt", ios::in);
	fo.open("output.txt", ios::out);
	int cnt;
	cin >> cnt;
	for (int i = 0; i < cnt; ++i) {
		int number_booking, time_clean;
		cin >> number_booking;
		cin >> time_clean;
		for (int j = 0; j < number_booking; ++j) {
			string temp;
			cin >> temp;
			int y, mo, d, h, m;
			scanf_s("%d-%d-%d %d:%d ", &y, &mo, &d, &h, &m);
			time1 = time(y, mo, d, h, m);
			//cout << y << "  " << mo << "  " << d << " " << h << " " << m;
			booking_in[j] = time1;
			//cin >> temp;
			scanf_s("%d-%d-%d %d:%d", &y, &mo, &d, &h, &m);
			//cout << y << "  " << mo << "  " << d << " " << h << " " << m;
			time1 = time(y, mo, d, h, m);
			//cout << time1;
			booking_out[j] = time1+time_clean;
		}
		sort(booking_in, booking_in+number_booking);
		sort(booking_out,booking_out+number_booking);
		/*cout << "mang in" << endl;
		for (int k = 0; k < number_booking; ++k) {
			cout << booking_in[k] << "  ";
		}
		cout << endl;
		cout << "mang out" << endl;
		for (int k = 0; k < number_booking; ++k) {
			cout << booking_out[k] << "  ";
		}*/
		int cnt = 0,max=0;
		for (int k = 0; k < number_booking; ++k) {
			cnt = 1;
			for (int j = 0; j < number_booking && j != k ; ++j) {
				if (booking_in[k] > booking_in[j]) {
					if (booking_in[k] < booking_out[j]) cnt++;
				}
				else break;
			}
			if (cnt > max) max = cnt;
		}
		cout << max << endl;
	}
	
	_getch();
	return 0;
}