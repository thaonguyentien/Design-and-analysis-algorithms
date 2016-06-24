	/*
	Name:Rock-Paper-scissors Tournament
	Author:NTT_TNN
	Vesrion:
	Copyright:nguyentienthao96@gmail.com
	Description:dung mot mang de luu so lan thang cua moi nguoi mot mang khac de luu so luong tran nguoi do tham
	ra ma co ket qua khac hoa. sau do tu 2 mang do ta tinh duoc mang ty so thang.
	Date and time : 14h00 15/06/2016
	*/

	#include<stdio.h>
	#include<iostream>
	#include<string>
	#include<algorithm>
	#include<fstream>
	#include<iomanip>	
	#include<conio.h>
	int flag = 1;
	int a[101];
	float wl[101];
	using namespace std;

	void seperate(string str, string &t1, string &t2, string &t3, string &t4) {
		int i = 0,c=0;
		int len = str.length();
		int j = 0;
		while (str[i++] != ' ') {
			if (i > len) {
				flag = 0;
				return;
			};
			c++;
		}
		t1 = str.substr(j, c);

		j = i;
		c = 0;
		while (str[i++] != ' ') {
			if (i > len) {
				flag = 0;
				return;
			};
			c++;
		}
		t2 = str.substr(j, c);
		j = i;
		c = 0;
		while (str[i++] != ' ') {
			if (i > len) {
				flag = 0;
				return;
			};
			c++;
		}
		t3 = str.substr(j, c);
	
		j = i;
		c = 0;
		while ( str[i++] != '\0') {
			if (i > len) {
				flag = 0;
				return;
			};
			c++;
		}
		t4 = str.substr(j, c);
	}

	void seperate2(string str, string &t1, string &t2) {
		int i = 0, c = 0, j = 0;
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
	int main() {
	string str;
	int sum[101];
	int n=0, k=0;
	while (1) {
	getline(cin, str);
	if (str.length() < 8) {
	if (str.length() == 1) return 0;
	else {
		string  t11, t22;
		seperate2(str, t11, t22);
		n = atoi(t11.c_str());
		k = atoi(t22.c_str());
	
	}
	}
	for (int i = 1; i <=n; ++i) a[i] = 0;
	for (int i = 1; i <= n; ++i) sum[i] = 0;
	for (int i = 1; i <= (n*k*(n-1)/2); ++i) {
		int n1, n2;
		string temp_str,t1,t2,t3,t4;
		getline(cin,temp_str);
		seperate(temp_str, t1, t2, t3, t4);
		n1 = atoi(t1.c_str());
		
		n2 = atoi(t3.c_str());
		
		int flag1 = 0;
			
		if		(t2 == "paper"    &&t4 == "rock") {
			a[n1]++;
			flag1 = 1;
		}
		else if (t2 == "paper"    &&t4 == "scissors") {
			a[n2]++;
			flag1 = 1;
		}
		else if (t2 == "rock"     &&t4 == "paper") {
			a[n2]++;
			flag1 = 1;
		}
		else if (t2 == "rock"     &&t4 == "scissors") {
			a[n1]++;
			flag1 = 1;
				
		}
		else if (t2 == "scissors" &&t4 == "rock") {
			a[n2]++;
			flag1 = 1;
				
		}
		else if (t2 == "scissors" &&t4 == "paper") {
			a[n1]++;
			flag1 = 1;
				
		}
		
		if (flag1 == 1) {
			sum[n1]++;
			sum[n2]++;
		}
		}
	
	for (int i = 1; i <= n; ++i) {
		
		if(sum[i]!=0) wl[i] = (float)a[i] / sum[i];
		else wl[i] = -1;
	}
	
	for (int i = 1; i <= n; ++i) {
			if (wl[i] == -1)	cout<<"-\n";
			else 
			{
				cout << setiosflags(ios::fixed) << setprecision(3);
				cout << wl[i];
				cout << "\n";
			}
		}
	
	cout << endl;
	}
	return 0;
	}