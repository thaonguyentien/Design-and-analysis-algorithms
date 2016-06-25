/*
Name:2048
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:
Date and time :23h 24/06/2016
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

void left(int a[][4]) {
	for (int j = 0; j < 4; ++j) {
		if (a[0][j] == 0 && a[1][j] == 0 && a[2][j] == 0 && a[3][j] == 0);
		else if(a[0][j]=0&&a[1][j]==0&&a[2][j]==0){
			a[0][j] = a[3][j];
			a[3][j] = 0;
		}
		else if (a[0][j] == 0 && a[1][j] == 0) {
			if (a[2][j] == a[3][j]) {
				a[0][j] = a[2][j] + a[3][j];
				a[2][j] = a[3][j] = 0;
			}
			else {
				a[0][j] = a[2][j];
				a[1][j] = a[3][j];
				a[2][j] = a[3][j] = 0;
			}
		}
		else if (a[0][j] == 0) {
			if (a[1][j] == a[2][j] && a[2][j] == a[3][j]) {
				a[0][j] = a[1][j];
				a[1][j] = a[2][j] + a[3][j];
				a[2][j] = a[2][j] = 0;
			}else if()
		}
		
	}
}
inline
void use_io_optimizations()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
}

int main() {
	use_io_optimizations();
	int a[4][4];
	int fn;
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j)
			cin >> a[i][j];
	}
	cin >> fn;
	
	return 0;
}