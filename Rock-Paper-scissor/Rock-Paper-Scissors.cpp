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
#include<algorithm>
#include<conio.h>
int flag = 1;
//int out[101];
int a[101];
float wl[101];
//float out_of[101];
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

int main() {
	string str;
	int sum[101];
	int n=0, k=0;
	int n1, n2;
	while (1) {
		getline(cin, str);
		if (str.length() < 4) {
			if (str.length() == 1) break;
			else {
				n = atoi(str.c_str());
				str = str[2];
				k = atoi(str.c_str());
			}
		}
		for (int i = 1; i <=n; ++i) a[i] = 0;
		for (int i = 1; i <= n; ++i) sum[i] = 0;
		for (int i = 1; i <= (n*k*(n-1)/2); ++i) {
			string temp_str,t1,t2,t3,t4;
			getline(cin,temp_str);
			seperate(temp_str, t1, t2, t3, t4);
			n1 = atoi(t1.c_str());
			//cout << "t2=" << t2;
			//cout << "t4=" << t4;
			//out[n1] = 1;
			n2 = atoi(t3.c_str());
			//out[n2] = 1;
			int flag = 0;
			
			if (t2 == "paper"    &&t4 == "rock") {
				a[n1]++;
				flag = 1;
			}
			else if (t2 == "paper"    &&t4 == "scissors") {
				a[n2]++;
				flag = 1;
			}
			else if (t2 == "rock"     &&t4 == "paper") {
				a[n2]++;
				flag = 1;
			}
			else if (t2 == "rock"     &&t4 == "scissors") {
				a[n1]++;
				flag = 1;
				
			}
			else if (t2 == "scissors" &&t4 == "rock") {
				a[n2]++;
				flag = 1;
				
			}
			else if (t2 == "scissors" &&t4 == "paper") {
				a[n1]++;
				flag = 1;
				
			}
			if (flag == 1) {
				sum[n1]++;
				sum[n2]++;
			}
		}
		//for (int i = 0; i < 101; ++i) cout << a[i];
		for (int i = 0; i <= n; ++i) {
			if(sum[i]!=0) wl[i] = (float)a[i] / sum[i];
			else wl[i] = -1;
		}
		//int cnt = 0;
		//for(int i=0;i<=n;++i){
		//	if (out[i] != 0) {
		//		out_of[cnt++] = wl[i];
		//	}
		//}
		
		//sort_heap(wl+1,wl+n);
		if (flag == 1) 
			for (int i = 1; i <= n; ++i) {
				if (i == n) {
					if (wl[i] == -1)printf("-");
					else printf("%.3f", wl[i]);
				}
				else {
					if (wl[i] == -1)printf("-\n");
					else printf("%.3f\n", wl[i]);
				}
			}
		cout << endl;
	}
	
	_getch();
	return 0;
}