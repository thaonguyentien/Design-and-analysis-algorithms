/*
Name:Calories from fat
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:
Date and time :25/06/2016
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
	string data[5],temp;
	int cnt = 0;
	for (string str; cin >> str&&str != "-";) {
		do {
			data[cnt] = str;
		}while((cnt%5)==4||)
	}
	return 0;
}