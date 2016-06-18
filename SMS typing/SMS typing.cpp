#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main() {
	string keys[12] = {
		"","abc","def",
		"ghi","jkl","mno",
		"pqrs","tuv","wxyz",
		""," ",""
	};
	int T;
	scanf_s("%d\n",&T);
	for (int t = 0; t < T; ++t) {
		string line;
		getline(cin, line);
		long count=0;
		for (int i = 0; i < line.length(); ++i) {
			int temp;
			for (int j = 0; j < 12; ++j) {
				for (int k = 0; k < keys[j].length(); ++k) {
					if (line[i] == keys[j][k]) temp = k+1;
				}
			}
			count += temp;
		}
		printf("Case #%d: %d\n", t + 1, count);
	}

}