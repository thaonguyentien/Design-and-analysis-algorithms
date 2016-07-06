/*
Name: Eight Queen
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description: y tuong co ban la voi moi quan hau ta tim ra cac vi tri ma quan hau do co the tan cong duoc va danh dau vi tri do.
neu khi den mot vi tri ma quan hau co the tan cong ma co quan hau khac thi in ra la:"valid" nguoc lai khi du 8 quan hau thi in ra
"valid"
Date and time : 9h00 14/06/2016
*/

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
			scanf("%c", &temp);
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
	if (flag == 1 && cnt == 8) printf("valid");
	else printf("invalid");
	return 0;

}