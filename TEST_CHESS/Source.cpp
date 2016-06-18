#include<cstdio>
#include<string>
#include<iostream>
#include<conio.h>

using namespace std;
int table[10][10];
int iii = -1, jjj = -1;
int flag = 0, cnt = 0;
char keys[9] = { 'A','B','C','D','E','F','G','H' };
void star(int a[][10], int i, int j, int number) {
	int ii = i, jj = j;
	cnt++;
	if ((i == 0 && j == 0)) {
		while (j != 10 && i != 10) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i++][j++] = number;
		}
	}
	else if (i == 10 && j == 10) {
		while (i != -1 && j != -1) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i--][j--] = number;
		}
	}
	else if (i == 0 && j == 10) {
		while (i != 8 && j != 10) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i++][j--] = number;
		}
	}
	else if (i == 10 && j == 0) {
		while (i != -1 && j != 10) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i--][j++] = number;
		}
	}
	else if (i == 0) {
		while (j != -1 && j != 10) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i++][j--] = number;
		}
		i = ii;
		j = jj;
		while (j != -1 && j != 10) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i++][j++] = number;
		}
	}
	else if (i == 10) {
		while (j != -1 && j != 10) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i--][j++] = number;
		}
		i = ii;
		j = jj;
		while (j != -1 && j != 10) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i--][j--] = number;
		}
	}
	else if (j == 0) {
		while (i != -1 && i != 10) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i--][j++] = number;
		}
		i = ii;
		j = jj;
		while (i != -1 && i != 10) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i++][j++] = number;
		}
	}
	else if (j == 7) {
		while (i != -1 && i != 10) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i--][j--] = number;
		}
		i = ii;
		j = jj;
		while (i != -1 && i != 10) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i++][j--] = number;
		}
	}
	else {
		while (i != -1 && j != -1 && j != 10 && i != 10) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i--][j++] = number;
		}
		i = ii;
		j = jj;
		while (i != -1 && j != -1 && j != 10 && i != 10) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i++][j--] = number;
		}
	}
	i = ii;
	j = jj;
	while (i != -1 && j != -1 && j != 10 && i != 10) {
		if (a[i][j] != 0 && i != ii && j != jj) {
			iii = i;
			jjj = j;
			flag = 1;
			return;
		}
		a[i--][j--] = number;
	}
	i = ii;
	j = jj;
	while (i != -1 && j != -1 && j != 10 && i != 10) {
		if (a[i][j] != 0 && i != ii && j != jj) {
			iii = i;
			jjj = j;
			flag = 1;
			return;
		}
		a[i++][j++] = number;
	}


}

int main() {
	for (int i = 0; i < 10; ++i)
		for (int j = 0; j < 10; ++j) table[i][j] = 0;
	star(table,8, 8, 3);
	cout << "mang 1:" << endl;
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j)
			cout << "  " << table[i][j] << "  ";
		cout << endl;
	}
	cout << "1:" << iii << "  " << jjj;
	star(table, 7, 5, 4);
	cout << "mang 2:" << endl;
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j)
			cout << "  " << table[i][j] << "  ";
		cout << endl;
	}
	cout << "2:" << iii << "  " << jjj;
	_getch();
	return 0;
}