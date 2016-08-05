/*
Name:Virus replication
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description: voi moi dau vao ta tim vi tri dau tien ma 2 cuoi ADN khac nhau
ta tach chuoi 2 chuoi ADN tu vi tri da tim dc o tren thanh 2 chuoi moi. dao 
nguoc hai chuoi va tim vi tri dau tien khac nhau. vay chieu dai nho nhat bi 
thay the se la as-i hay noi cach khac la do dai doan con lai neu ta tach tu vi tri 
cua tim dc den het.
Date and time :19/07/2016 22h
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
string reverse(string str)
{
	string result = "";
	for (int i = str.length(); i >= 0; i--)
	{
		result += str[i];
	}
	return result;
}
int main() {
	use_io_optimizations();
	string before, after;
	cin >> before >> after;
	int bs, as;
	bs = before.size();
	as = after.size();
	int index=0;
	for (int i = 0; i < as || i < bs; ++i) {
		if (before[i] == after[i])
			index ++;
		else break;
	}
	before = before.substr(index);
	after = after.substr(index);
	before = reverse(before);
	after = reverse(after);
	bs = before.size();
	as = after.size();

	index = 0;
	
	for (int i = 0; i < bs || i < as; ++i) {
		if (before[i] == after[i]) index++;
		else break;
	}
	cout << as - index;
	
	return 0;
}