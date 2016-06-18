/*
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:Toilet Seat
Date and time : 18h 14/06/2016
*/

#include<cstdio>
#include<iostream>
#include<string>


using namespace std;
int main() {
	string str;
	char status;
	int cnt1=0, cnt2=0, cnt3=0;
	getline(cin, str);
	status = str[0];
	
	// nhom nguoi thu nhat
	for (int i = 1; i < str.length(); ++i) {
		if		(str[i] == 'U'&&status == 'U') ;
		else if (str[i] == 'U'&&status == 'D') cnt1++;
		else if (str[i] == 'D'&&status == 'U')cnt1=cnt1+2;
		else if (str[i] == 'D'&&status == 'D')cnt1++;
		status = 'U';
	}
	cout << cnt1<<endl;
	status = str[0];
	//nhom nguoi thu 2
	for (int i = 1; i < str.length(); ++i) {
		if		(str[i] == 'U'&&status == 'U') cnt2++;
		else if (str[i] == 'U'&&status == 'D') cnt2=cnt2+2;
		else if (str[i] == 'D'&&status == 'U') cnt2++;
		else if (str[i] == 'D'&&status == 'D');
		status = 'D';
	}
	cout << cnt2 << endl; 
	status = str[0];
	//nhom nguoi thu 3
	for (int i = 1; i < str.length(); ++i) {
		if		(str[i] == 'U'&&status == 'U');
		else if (str[i] == 'U'&&status == 'D') cnt3++;
		else if (str[i] == 'D'&&status == 'D');
		else if (str[i] == 'D'&&status == 'U') cnt3++;
		status = str[i];
	}
	cout << cnt3;

	return 0;
}
