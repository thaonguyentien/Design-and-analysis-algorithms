/*
Name:T9 Spelling
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description: ta tao mot xau mau al sao cho cac ky tu xuat phat tu cung mot phim chia 4 lan phan nguyen se cung mot gia tri
sau do ta duyet sau can xet den cuoi neu 2 ky tu lien nhau co vi tri trong sau mau cung chia het cho mot so thi ta them dau 
cach nguoc lai thi thoi cho den khi het sau.
Date and time :
*/
#include<cstdio>
#include<string>
#include<iostream>
#include<conio.h>


#define FOR(i,a,b) for(int i = a; i <= b; ++i)

using namespace std;

int main()
{
	int t, q;
	string s, str;
	string al = " +++++++abc+def+ghi+jkl+mno+pqrstuv+wxyz";
	string num = "0123456789";
	//freopen("input.inp", "r", stdin);
	getline(cin, s);
	q = atoi(s.c_str());
	FOR(j, 1, q)
	{
		getline(cin, s);
		s = ' ' + s;
		str = "";
		FOR(i, 1, s.length() - 1)
		{
			t = al.find(s[i]);
			if (t / 4 == al.find(s[i - 1]) / 4) str += ' ';
			FOR(j, 0, t % 4) str = str + num[t / 4];
		}
		cout << "Case #" << j << ": " << str;
		if (j < q) cout << endl;
	}
	_getch();
}