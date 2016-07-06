/*
Name:lifing walls
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description: su dung khoang cach de tim so scranes can toi thieu. lan luot duyet tu 1 den 4 vi khong the nhieu 
hon 4 scranes nen neu den 4 thi in ra Impossible
Date and time :03/07/2016 13h
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
int number_scranes(int reach);
double distance(double x1, double y1, int x2,int y2);

double wall_x[4],wall_y[4];
int scranes_x[60], scranes_y[60];
int l, w, n, r;
int main() {
	
	cin >> l >> w >> n >> r;
	wall_x[0] = -l / 2.0;
	wall_y[0] = 0;
	wall_x[1] = l/2.0;
	wall_y[1] = 0;
	wall_y[2] = -w / 2.0;
	wall_x[2] = 0;
	wall_y[3] = w / 2.0;
	wall_x[3] = 0;
	for (int i = 0; i < n; ++i) {
		cin >> scranes_x[i] >> scranes_y[i];
	}
	int reach = r*r;
	int num = number_scranes(reach);
	if (num == -1){
		cout << "Impossible" << endl;
	}
	else{
		cout << num << endl;
	}
	cin >> n;
	return 0;
}

int number_scranes(int reach) {
	int cnt=0;
	for (int i = 0; i < n; ++i) {
		cnt = 0;
		for (int w = 0; w < 4; ++w) {
			if (distance(wall_x[w], wall_y[w], scranes_x[i], scranes_y[i]) <= reach) cnt++;
		}
		if (cnt == 4) return 1;
	}

	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			cnt = 0;
			for (int w = 0; w < 4; w++) {
				if (distance(wall_x[w], wall_y[w], scranes_x[i], scranes_y[i]) <= reach ||
					distance(wall_x[w], wall_y[w], scranes_x[j], scranes_y[j]) <= reach) cnt++;
			}
			if (cnt == 4) return 2;
		}
		
	}

	for (int i = 0; i < n; ++i) {
		
		for (int j = i + 1; j < n; ++j) {
			for (int k = j + 1; k < n; ++k) {
				cnt = 0;
				for (int w = 0; w < 4; w++) {
					if (distance(wall_x[w], wall_y[w], scranes_x[i], scranes_y[i]) <= reach ||
						distance(wall_x[w], wall_y[w], scranes_x[j], scranes_y[j]) <= reach ||
						distance(wall_x[w], wall_y[w], scranes_x[k], scranes_y[k]) <= reach) cnt++;
				}
				if (cnt == 4) return 3;
			}
		}
		
	}

	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			for (int k = j + 1; k < n; ++k) {
				for (int l = k + 1; l < n; ++l) {
					cnt = 0;
					for (int w = 0; w < 4; w++) {
						if (distance(wall_x[w], wall_y[w], scranes_x[i], scranes_y[i]) <= reach ||
							distance(wall_x[w], wall_y[w], scranes_x[j], scranes_y[j]) <= reach ||
							distance(wall_x[w], wall_y[w], scranes_x[k], scranes_y[k]) <= reach ||
							distance(wall_x[w], wall_y[w], scranes_x[l], scranes_y[l]) <= reach) cnt++;
						
					}
					if (cnt == 4) return 4;
				}
				
			}
		}
		
	}
	return -1;	
}

double distance(double x1, double y1, int x2, int y2) {
	return (x1 - x2)*(x1 - x2)	 + (y1 - y2)*(y1 - y2);
}

