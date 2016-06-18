/*
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description: Eight queens
Date and time : 9h00 14/06/2016
*/
// test case : luu y khi dien khong du 8 quan hau se in ra invalid
#include<cstdio>
#include<string>

using namespace std;
char a[8][8];
void star(char a[][8], int i, int j) {
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
	int flag = 1;
	char temp;
	int cnt = 0;
	for (int i = 0; i < 8; ++i)
		for (int j = 0; j < 8; ++j)
			a[i][j] = '.';
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 9; ++j) {
			scanf_s("%c", &temp);
			if (temp == '*') {
				cnt++;
				if (a[i][j] == '*') {
					printf("invalid");
					return 0;
				}
				else {
					a[i][j] = temp;
					if (a[i][j] == '*') {
						star(a, i, j);

					}
				}
			}
			else continue;
		}
		
	}
	if (flag == 1&&cnt==8) printf("valid");
	else printf("invalid");
	return 0;

}