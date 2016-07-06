/*
Name:Welcome to code jam
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:su dung mot mang 2 chieu de tinh toan. voi moi phan tu cua xau mau "welcome to code jam" ta 
tim  trong xau s nhung phan tu giong voi no ta gan cho mang a[i][j] gia tri tuong ung. cu lam nhu vay cho den khi
het xau s. noi cac khac voi moi tu co the dung lam mot thanh phan trong xau welcome to code jam ta di nhan voi he 
cac tu co the su dung. cu the 2.2.2.2.2=32
Date and time :05/07/2016
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

const string goal = "welcome to code jam";

void dynamic(int **v, int rows, int cols, string s)
{
	for (int i = rows - 1; i >= 0; --i)
	{
		for (int j = cols - 1; j >= 0; --j) {
			int ans = 0;
			if (s[j] == goal[i]) {
				if (i < rows - 1 && j < cols - 1) {
					ans = v[i + 1][j + 1];
				}
				else if (i == rows - 1) {
					ans = 1;
				}
			}
			if (j < cols - 1) {
				ans += v[i][j + 1];
			}
			v[i][j] = ans % 10000;
		}
	}
}
int main() {
	use_io_optimizations();
	int t;
	cin >> t;
	string s;
	getline(cin, s); // flush input
	for (int i = 0; i < t; ++i) {
		getline(cin, s);

		int** v = new int*[goal.size()];
		for (int i = 0; i < goal.size(); ++i) {
			v[i] = new int[s.size()];
			for (int j = 0; j < s.size(); ++j) {
				v[i][j] = 0;
			}
		}

		dynamic(v, goal.size(), s.size(), s);

		string ans = to_string(v[0][0] % 10000);
		while (ans.size() < 4) {
			ans = "0" + ans;
		}

		cout << "Case #" << i + 1 << ": " << ans << endl;
	}
	
	return 0;
}