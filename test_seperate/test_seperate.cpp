/*
Name:Rock-Paper-scissors Tournament
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:
Date and time : 14h00 15/06/2016
*/

#include<stdio.h>
#include<iostream>
#include<string>
#include<conio.h>

int a[100];
using namespace std;
void seperate2(string str, string &t1, string &t2) {
	int i = 0, c = 0,j=0;
	while (str[i++] != ' ') {
		c++;
	}
	t1 = str.substr(j, c);
	j = i;
	c = 0;
	while (str[i++] != '\0') {
		c++;
	}
	t2 = str.substr(j, c);
}
void seperate(string str, string &t1, string &t2, string &t3, string &t4) {
	int i = 0, c = 0;
	int len = str.length();
	int j = 0;
	while (str[i++] != ' ') {
		if (i > len) {
			//flag = 0;
			return;
		};
		c++;
	}
	t1 = str.substr(j, c);

	j = i;
	c = 0;
	while (str[i++] != ' ') {
		if (i > len) {
			//flag = 0;
			return;
		};
		c++;
	}
	t2 = str.substr(j, c);
	j = i;
	c = 0;
	while (str[i++] != ' ') {
		if (i > len) {
			//flag = 0;
			return;
		};
		c++;
	}
	t3 = str.substr(j, c);

	j = i;
	c = 0;
	while (str[i++] != '\0') {
		if (i > len) {
			//flag = 0;
			return;
		};
		c++;
	}
	t4 = str.substr(j, c);
}


int main() {
	string str, t1, t2, t3, t4;
	getline(cin,str);
	seperate2(str, t1, t2);
	//str = "nguyen";
	int n = atoi(t1.c_str());
	cout << "n=" << n;
	cout << "t1=" << t1 << endl;
	cout << "t2=" << t2 << endl;
	cout << "t3=" << t3 << endl;
	cout << "t4=" << t4;
	_getch();
	return 0;

}
