#include<iostream>
#include<string>
#include<conio.h>

using namespace std;
char a[8][8];
int flag = 0;
void star(char a[][8], int i, int j) {
	flag = 1;
	int ii = i, jj = j;
	for (int k = 0; k < 8; ++k) a[i][k] = '*';
	for (int k = 0; k < 8; ++k) a[k][j] = '*';
	if ((i == 0 && j == 0)) {
		while (j != 7 && i != 7) {
			a[++i][++j] = '*';
		}
	}
	else if (i == 7 && j == 7) {
		while (i != 0 && j != 0) {
			a[--i][--j] = '*';
		}
	}
	else if (i == 0 && j == 7) {
		while (i != 7 && j != 0) {
			a[++i][--j] = '*';
		}
	}
	else if (i == 7 && j == 0) {
		while (i != 0 && j != 7) {
			a[--i][++j] = '*';
		}
	}
	else if (i == 0) {
		while (j != 0 && j != 7) {
			a[++i][--j] = '*';
		}
		i = ii;
		j = jj;
		while (j != 0 && j != 7) {
			a[++i][++j] = '*';
		}
	}
	else if (i == 7) {
		while (j != 0 && j != 7) {
			a[--i][++j] = '*';
		}
		i = ii;
		j = jj;
		while (j != 0 && j != 7) {
			a[--i][--j] = '*';
		}
	}
	else if (j == 0) {
		while (i != 0 && i != 7) {
			a[--i][++j] = '*';
		}
		i = ii;
		j = jj;
		while (i != 0 && i != 7) {
			a[++i][++j] = '*';
		}
	}
	else if (j == 7) {
		while (i != 0 && i != 7) {
			a[--i][--j] = '*';
		}
		i = ii;
		j = jj;
		while (i != 0 && i != 7) {
			a[++i][--j] = '*';
		}
	}
	else {
		while (i != 0 && j != 0 && j != 7 && i != 7) {
			a[--i][--j] = '*';
		}
		i = ii;
		j = jj;
		while (i != 0 && j != 0 && j != 7 && i != 7) {
			a[++i][++j] = '*';
		}
		i = ii;
		j = jj;
		while (i != 0 && j != 0 && j != 7 && i != 7) {
			a[--i][++j] = '*';
		}
		i = ii;
		j = jj;
		while (i != 0 && j != 0 && j != 7 && i != 7) {
			a[++i][--j] = '*';
		}
	}
}


int main() {
	for (int i = 0; i < 8; ++i)
		for (int j = 0; j < 8; ++j)
			a[i][j] = '.';
	for (int m = 0; m < 8; m++ ) {
		for (int n = 0; n < 8; ++n) {
			for (int i = 0; i < 8; ++i)
				for (int j = 0; j < 8; ++j)
					a[i][j] = '.';
			star(a, m, n);
			cout << "#:" <<m<<"  "<<n<< endl;
			for (int i = 0; i < 8; ++i) {
				for (int j = 0; j < 8; ++j)
					cout << a[i][j];
				cout << endl;
			}
		}
	}
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j)
			cout <<a[i][j];
		cout << endl;
	}
	cout << "flag=" << flag;
	_getch();
}