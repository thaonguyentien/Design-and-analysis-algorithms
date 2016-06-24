/*
Name:Hay point
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description: su dung mot map de luu cac cap word va num . sau do voi moi chuoi nhan ta xet tung tu mot neu ton
tai trong map thi cong them vao bien dem gia tri cua truong num
Date and time :
*/

#include<cstdio>
#include<fstream>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<time.h>
#include<conio.h>


using namespace std;
inline
void use_io_optimizations()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
}
vector<pair<string, int>> dic;
void SUM(string str,int &sum,int n) {
	int ii = 0, jj = 0,index=-1;
	string temp;
	for (int i = 0; i <= str.length(); ++i) {
		index = -1;
		if (str[i] == ' ' || str[i] == '\0') {
			jj = i;
			temp = str.substr(ii, jj - ii);
			ii = i + 1;
			for (int j = 0; j < n; ++j) {
				if (dic[j].first == temp) {
					sum += dic[j].second;
					break;
				}
			}
		}
	}
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
	//n = atoi(t1.c_str());
	//k = atoi(t2.c_str());
}
int main() {
	use_io_optimizations();
	unsigned int n, k;
	map<string, unsigned int > dic;
	clock_t start = clock();
	fstream fi,fo,ft;
	ft.open("temp.txt", ios::out);
	fi.open("input.txt", ios::in);
	fo.open("output.txt", ios::out);
	fi >> n >> k;
	for (int i = 0; i < n; ++i) {
		string word;
		unsigned num;
		fi >> word >> num;
		dic[word] = num;
	}
	for (int i = 0; i < k; ++i) {
		string word1;
		unsigned int cnt = 0;
		fi >> word1;
		while (word1 != ".") {
			cnt += dic[word1];
			fi >> word1;
		}
		fo << cnt << "\n";
	}
	clock_t finish = clock();
	fo << "time=" << (finish - start) / CLOCKS_PER_SEC;
	fi.close();
	fo.close();
	
	return 0;
}