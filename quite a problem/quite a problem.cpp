/*
Name:Quite a problem
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description: chú ý trường hợp nhập vào sâu rỗng in ra no
Date and time :14h 25/06/2016
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
	string str;
	int index;
	fstream fi, fo;
	fi.open("input.txt", ios::in);
	fo.open("output.txt", ios::out);
	for(string str;getline(fi,str);){
		index=-1;
		transform(str.begin(), str.end(),str.begin(), tolower);
		index = str.find("problem");
		//if(index==-1) index = str.find("Problem");
		//if (index == -1) index = str.find("pRoblem");
		//cout << "str=" << str<<endl;
		if (index != -1) fo << "yes" << endl;
		else fo << "no" << endl;
	}
	return 0;
}