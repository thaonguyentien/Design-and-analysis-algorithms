/*#include<iostream>
#include<conio.h>
#include<algorithm>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; ++i) {
		int salary[3];
		cin >> salary[0];
		cin >> salary[1];
		cin >> salary[2];
		sort(salary, salary + 3);
		cout << "Case " << i + 1<<": "<< salary[1]<< endl;
	}
	_getch();
}*/

#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
	int T;
	scanf_s("%d", &T);
	for (int t = 0; t < T; t++) {
		int salary[3];
		scanf_s("%d", &salary[0]);
		scanf_s("%d", &salary[1]);
		scanf_s("%d", &salary[2]);
		sort(salary, salary + 3);
		printf("Case %d: %d\n", t + 1, salary[1]);
	}
	return 0;
}