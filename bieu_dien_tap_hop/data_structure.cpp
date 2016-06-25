/*
Name:
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:
Date and time :
*/

#include<cstdio>
#include<fstream>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<conio.h>
#include<map>

using namespace std;

int main() {
	/*int x = (1<<0|1<<3|1<<4);
	int a = 7;
	for (int a = 0; a < 10; ++a) {
		if (a & x){
			cout << "yes  ";
		}
		else cout << "no  ";
	}
	
	//cout <<x;*/
	/*vector<int> adj[4];
	adj[0].push_back(1);
	adj[0].push_back(2);
	adj[1].push_back(0);
	adj[1].push_back(2);
	adj[2].push_back(0);
	adj[2].push_back(1);
	adj[2].push_back(3);
	adj[3].push_back(2);
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < adj[i].size(); ++j)
			cout << adj[i][j];
		cout << endl;
	}*/
	/*vector<pair<string, int>> dic;
	fstream f;
	f.open("input.txt", ios::in);
	string str;
	getline(f, str);
	string temp;
	int jj = 0, ii = 0;
	str.*/
	/*int  n[3];
	n[0] = 3;
	n[1] = 2;
	n[2] = 4;
	sort_heap(n, n + 3);
	for (int i = 0; i < 3; ++i) {
		cout << " " << n[i];
	}*/
	string a;
	cin >> a;
	int b = stoi(a);
	if (a.size() == 0) cout << "np";
	cout <<"b=" << b;
	_getch();
}