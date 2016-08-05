/*
Name:Dominos_1
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:su dung mang id de luu cac chi lan luot dung trong ham dfs. mang id duoc tim bang 
cach su dung ham ft ham nay duyet tat cac cac vi tri tu dau den cuoi tim quan dominos dau tien
ma cac quan do no lam do dua vao mang id. sau do dung ham reverse de dao dc mang id. thuc chat 
sau ham ft va reverse ta tim dc quan dominos cuoi cung bi do neu xuat phat tu vi tri tu dau. 
ta lay vi tri do lam vi tri cham tay dau tien.
Date and time :05/08/2016 14h
*/

#include<cstdio>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<fstream>
#include<vector>
#include<time.h>
#include<map>
#include <cstdlib>


using namespace std;

inline
void use_io_optimizations()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
}
vector<int> vt[100001];
vector<int> id;
bool is_visit1[100001];
bool is_visit2[100001];

int cnt = 0;


void ft(int u) {
	if (is_visit2[u]) return;
	is_visit2[u] = true;
	for (int i = 0; i < vt[u].size(); ++i) {
		int t = vt[u][i];
		ft(t);
	}
	id.push_back(u);
}
void dfs(int u) {
	if (is_visit1[u]) return;
	is_visit1[u] = true;
	for (int i = 0; i < vt[u].size(); ++i) {
		int temp3 = vt[u][i];
		dfs(temp3);
	}
}

int main() {
	use_io_optimizations();
	int T, n, m;
	fstream fi, fo;
	fi.open("input.txt", ios::in);
	fo.open("output.txt", ios::out);
	fi >> T;
	for (int t = 0; t < T; ++t) {
		fi >> n >> m;
		for (int i = 0; i < n + 1; ++i) {
			vt[i].clear();
		}
		memset(is_visit1, 0, n + 1);
		memset(is_visit2, 0, n + 1);
		int temp1, temp2;
		for (int i = 0; i < m; ++i) {
			fi >> temp1 >> temp2;
			vt[temp1].push_back(temp2);
		}

		//for (int i = 1; i < n + 1; ++i) {
		//if (vt[i].size() > 0) {
		//	if (!is_visit1[i]) {
		//	dfs(i);
		//	cnt++;
		//}
		//}
		//}
		for (int i = 1; i < n + 1; ++i) {
			ft(i);
		}
		reverse(id.begin(), id.end());
			cout << "index:" << endl;
			for (int i = 0; i<id.size(); ++i) {
				cout << id[i] << "  ";
			}
		for (int i = 0; i < id.size(); ++i) {
			if (!is_visit1[id[i]]) {
				dfs(id[i]);
				cnt++;
			}
			//if (!is_visit1[i]) cnt++;
		}
		cout << cnt << endl;
		cnt = 0;
		//for (int i = 0; i < 100001; ++i) {
			//vt[i].clear();
			//is_visit1[i] = false;
			//is_visit2[i] = false;index
			//is_visit[i] = 0;
		//}
		id.clear();
	}
	cin >> T;
	return 0;
}