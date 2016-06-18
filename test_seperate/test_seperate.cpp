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

void seperate(string str, string &t1, string &t2, string &t3, string &t4) {
	t1 = str[0];
	int j;
	int i = 2, c = 0;
	while (str[i++] != ' ') {
	}
	t2 = str.substr(2, i-2);
	j = i;
	while (str[i++] != ' ') {
		c++;
	}
	t3 = str.substr(j, c);
	j = i;
	c = 0;
	while (str[i++] != '\0') {
		c++;
	}
	t4 = str.substr(j, c);
	
}

int main() {
	string str, t1, t2="", t3="", t4="";
	getline(cin,str);
	seperate(str, t1, t2, t3, t4);
	//str = "nguyen";
	
	cout << "t1=" << t1 << endl;
	cout << "t2=" << t2 << endl;
	cout << "t3=" << t3 << endl;
	cout << "t4=" << t4;
	_getch();
	return 0;

}
