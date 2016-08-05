/*
Name:Coast length
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:su dung mot mang mang de luu cac gia tri nhap vao. voi moi gia tri neu
no la nuoc ta them cac canh ke cua no vao mot vector. su dung mot mang cac vector de
luu thong tin cac dinh ke cua no . su dung dfs cho do thi tren cac vector neu voi moi
dinh la nuoc ma ke no la dat thi tang chieu dai bo bien len mot duyet nhu  vay cho den het
Date and time :14h 02/08/2016
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

using namespace std;
vector<int> vt[1005000];
bool is_visit[1005000];
int coast = 0;
inline
void use_io_optimizations()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
}
void dfs(int u, bool *is_island) {
	if (is_island[u]) {
		coast++;
		return;
	}
	if (is_visit[u]) {
		return;
	}
	is_visit[u] = true;
	for (int i = 0; i < vt[u].size(); ++i) {
		int v = vt[u][i];
		dfs(v, is_island);
	}
}
int main() {
	use_io_optimizations();
	int n, m;
	cin >> n >> m;
	int map_size = (n + 2)*(m + 2);
	int index = m + 2 + 1;
	bool is_island[1005000];
	memset(is_island, 0, map_size);
	memset(is_visit, 0, sizeof(is_visit));
	for (int i = 1; i < n + 1; ++i) {
		for (int j = 0; j < m; ++j) {
			char c;
			cin >> c;
			if (c == '1') is_island[index] = true;
			else is_island[index] = false;
			index++;
		}
		index += 2;
	}

	for (int i = 0; i < map_size; ++i) {
		if (is_island[i] == false) {
			if (i % (m + 2) != 0) {
				vt[i].push_back(i - 1);
			}
			if (i - (m + 2) >= 0) {
				vt[i].push_back(i - (m + 2));
			}
			if (i % (m + 2) != m + 1) {
				vt[i].push_back(i + 1);
			}
			if (i + m + 2 < map_size) {
				vt[i].push_back(i + m + 2);
			}
		}
	}
	dfs(0, is_island);
	cout << coast << endl;

	return 0;

}