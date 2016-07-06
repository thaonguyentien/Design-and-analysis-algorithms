/*
Name:Turbo
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:
Date and time :00h 26/06/2016
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
	vector<int> vect;
	fstream fi, fo;
	fi.open("input.txt", ios::in);
	fo.open("output.txt", ios::out);
	int cnt;
	fi >> cnt;
	for (int i = 0; i < cnt; ++i) {
		int temp;
		fi >> temp;
		vect.push_back(temp);
	}
	int max = 0,cnt_min=1,cnt_max=cnt;
	for (int i = 0; i < cnt; ++i) {
		int index;
		if (i % 2 == 0) {
			for (int j = 0; j < vect.size(); ++j) {
				if (vect[j] == cnt_min) {
					index = j;
					cnt_min++;
					break;
				}
			}
			
			fo << index << endl;
			vect.erase(vect.begin()+index);
		}else{
			for (int j = 0; j < vect.size(); ++j) {
				if(vect[j]==cnt_max){
					index = j;
					cnt_max--;
					break;
				}
			}
			fo << vect.size() - index - 1<<endl;
			vect.erase(vect.begin() + index);
		}
	}
	fi.close();
	fo.close();
	return 0;
}