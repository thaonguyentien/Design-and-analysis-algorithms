/*
Name:a different problem
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:
Date and time :24/06/2016
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
	use_io_optimizations();
	
	long long n1, n2;
	
	for (unsigned long long n1, n2; cin >> n1 >> n2;) {
		cout << (n1 > n2 ? n1 - n2 : n2 - n1) << endl;
	}

	return 0;
}