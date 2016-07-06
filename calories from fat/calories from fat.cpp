/*
Name:Calories from fat
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description: với mỗi record ta tính tổng số calo trên cả record và tổng số calo_fat tên record sau đó tính %
để tính calo trên record ta tính trên các dòng và cộng tổng lại với nhau.
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

void seperate(string str, string &t1, string &t2, string &t3, string &t4, string &t5) {
	int i = 0, c = 0;
	int len = str.length();
	int j = 0;
	while (str[i++] != ' ') {
		if (i > len) {
			return;
		};
		c++;
	}
	t1 = str.substr(j, c);

	j = i;
	c = 0;
	while (str[i++] != ' ') {
		if (i > len) {
			return;
		};
		c++;
	}
	t2 = str.substr(j, c);
	j = i;
	c = 0;
	while (str[i++] != ' ') {
		if (i > len) {
			return;
		};
		c++;
	}
	t3 = str.substr(j, c);

	j = i;
	c = 0;
	while (str[i++] != ' ') {
		if (i > len) {
			return;
		};
		c++;
	}
	t4 = str.substr(j, c);
	j = i;
	c = 0;
	while (str[i++] != '\0') {
		if (i > len) {
			return;
		};
		c++;
	}
	t5 = str.substr(j, c);
}
void process_line(string str, double &calories_fat, double &calories_toal) {
	string t[5];
	double fat_line = 0, total_line = 0,percent=100,percent_fat=0;
	seperate(str, t[0], t[1], t[2], t[3], t[4]);
	if (t[0].find("g")!=-1) {
		fat_line = stoi(t[0]) * 9;
		total_line += fat_line;
	}
	else if (t[0].find("C")!=-1) {
		fat_line = stoi(t[0]);
		total_line += fat_line;
	}
	else  {
		percent_fat = stoi(t[0]);
		percent -= percent_fat;
	}

	if (t[1].find("g")!=-1) {
		total_line += stoi(t[1]) * 4;
	}
	else if (t[1].find("C")!=-1) {
		total_line += stoi(t[1]);
	}
	else  {
		percent -= stoi(t[1]);
	}

	if (t[2].find("g")!=-1) {
		total_line += stoi(t[2]) * 4;
	}
	else if (t[2].find("C")!=-1) {
		total_line += stoi(t[2]);
	}
	else  {
		percent -= stoi(t[2]);
	}

	if (t[3].find("g")!=-1) {
		total_line += stoi(t[3]) * 4;
	}
	else if (t[3].find("C")!=-1) {
		total_line += stoi(t[3]);
	}
	else {
		percent -= stoi(t[3]);
	}
	if (t[4].find("g")!=-1) {
		total_line += stoi(t[4]) * 7;
	}
	else if (t[4].find("C")!=-1) {
		total_line += stoi(t[4]);
	}
	else  {
		percent -= stoi(t[4]);
	}

	if (percent == 100) {
		calories_fat += fat_line;
		calories_toal += total_line;
	}
	else {
		total_line = total_line / percent * 100;
		if (fat_line == 0) fat_line = percent_fat*total_line/100;
		calories_fat += fat_line;
		calories_toal += total_line;
		//cout << "percent_fat" << percent_fat;
		//cout << "fat+line" << fat_line;
	}
	//cout << percent;
}
int main() {
	use_io_optimizations();
	string temp;
	int cnt = 0;
	fstream fi, fo;
	fi.open("input.txt", ios::in);
	fo.open("output.txt", ios::out);
	//temp = "nguyen tien thao";
	//if (temp.find('z')) cout << "dung";
	////else cout << "sai";
	//cout << temp.find("z");
	for (string str; getline(fi, str) && str != "-";) {
		double calories_fat = 0, calories_total = 0;
		do {
			process_line(str, calories_fat, calories_total);
		} while (getline(fi, str) && str != "-");
		fo << round(calories_fat / calories_total*100)<<"%"<<endl;
		//cout << calories_fat << endl;
		//cout << calories_total;
	}
	//cin >> temp;
	return 0;
}