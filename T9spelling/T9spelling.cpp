/*
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description: T9 spelling
Date and time :14h30 14/06/2016 
*/

#include<cstdio>
#include<iostream>
#include<string>
#include<string.h>
#include<conio.h>

using namespace std;

string keys[12] = {
	" ","abc","def",
	"ghi","jkl","mno",
	"pqrs","tuv","wxyz",
	"","",""
};
int main() {
	int T,index=-1,temp_index=-1;
	string t1;
	getline(cin, t1);
	T = atoi(t1.c_str());
	fflush(stdin);
	for (int t = 0; t < T; ++t) {
		string str, out = "";
		fflush(stdin);
		getline(cin, str);
		printf("Case #%d: ", t+1);
		int len = str.length();
		for (int i = 0; i < len; ++i) {
			for (int j = 0; j < 12; ++j) {
				for (int k = 0; k < keys[j].length(); ++k) {
					if (str[i] == keys[j][k]) {
						temp_index = j;
						if (index == j) printf(" ");
						for (int l = 0; l <= k; ++l)
							if (j == 0) printf("%d", j);
							else printf("%d", j + 1);
					}
				}
				index = temp_index;
			}
		}
		printf("\n");
	}
	_getch();
	return 0;
}