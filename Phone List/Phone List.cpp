/*
Name:Phone List
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:
Date and time :9h0 23/06/2016
*/

#include<cstdio>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>
#include<vector>
#include<map>
#include<time.h>

using namespace std;

inline
void use_io_optimizations()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
}

int main() {
	clock_t start = clock();
	map<int, string> ct;
	use_io_optimizations();
	fstream fi, fo;
	fi.open("input.txt", ios::in);
	fo.open("output.txt", ios::out);
	int time, contacts,flag;
	 fi>> time;
	 for (int i = 0; i < time; ++i) {
		 fi >> contacts;
		 flag = 1;
		 int flag_temp;
		 string data="",temp;
		 for (int j = 0; j < contacts; ++j) {
			 fi >> temp;
			 temp = "+" + temp;
			 ct[j] = temp;
			 data += temp;
		 }
		 for (int j = 0; j < contacts; ++j) {
			 int index = data.find(ct[j]);
			// fo << "data=" << data << endl;
			 string str = data;
			 str.erase(index, ct[j].size());
			// fo << "str=" << str << endl;
			 int index2 = str.find(ct[j]);
			 if (index2 != -1) {
				 flag = 0;
				 break;
			 }
		 }
		 if (flag == 0) fo << "NO"<<endl;
		 else fo << "YES"<<endl;
	 }
	 clock_t finish = clock();
	 fo << "time=" << (finish - start) / CLOCKS_PER_SEC;
	
	 fi.close();
	 fo.close();
	return 0;
}