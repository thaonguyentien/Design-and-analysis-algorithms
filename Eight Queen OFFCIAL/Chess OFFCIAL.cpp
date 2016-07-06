/*
Name: Chess
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:
Date and time :
*/

#include<cstdio>
#include<string>
#include<iostream>


using namespace std;
int table[8][8];
int iii = -1, jjj = -1;
int flag = 0, cnt = 0;
char keys[9] = { 'A','B','C','D','E','F','G','H' };
void star(int a[][8], int i, int j, int number) {
	int ii = i, jj = j;
	cnt++;
	if ((i == 0 && j == 0)) {
		while (j != 8 && i != 8) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i++][j++] = number;
		}
	}
	else if (i == 7 && j == 7) {
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
	else if (i == 0 && j == 7) {
		while (i != 8 && j != 8) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i++][j--] = number;
		}
	}
	else if (i == 7 && j == 0) {
		while (i != -1 && j != 8) {
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
		while (j != -1 && j != 8) {
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
		while (j != -1 && j != 8) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i++][j++] = number;
		}
	}
	else if (i == 7) {
		while (j != -1 && j != 8) {
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
		while (j != -1 && j != 8) {
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
		while (i != -1 && i != 8) {
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
		while (i != -1 && i != 8) {
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
		while (i != -1 && i != 8) {
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
		while (i != -1 && i != 8) {
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
		while (i != -1 && j != -1 && j != 8 && i != 8) {
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
		while (i != -1 && j != -1 && j != 8 && i != 8) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i++][j++] = number;
		}
		i = ii;
		j = jj;
		while (i != -1 && j != -1 && j != 8 && i != 8) {
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
		while (i != -1 && j != -1 && j != 8 && i != 8) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				return;
			}
			a[i++][j--] = number;
		}
	}
}
int main() {

	int n;
	string N, str;
	//for (int i = 0; i < 8; ++i)
	//	for (int j = 0; j < 8; ++j) table[i][j] = 0;
	getline(cin, N);
	n = atoi(N.c_str());
	for (int i = 0; i < n; ++i) {
		cnt = 0;
		flag = 0;
		for (int i = 0; i < 8; ++i)
			for (int j = 0; j < 8; ++j) table[i][j] = 0;
		getline(cin, str);
		string str1, str2, str3, str4;
		int t1, t2, t3, t4;
		str1 = str[0];
		str2 = str[2];
		str3 = str[4];
		str4 = str[6];
		if (str1 == "A") t1 = 0;
		else if (str1 == "B") t1 = 1;
		else if (str1 == "C") t1 = 2;
		else if (str1 == "D") t1 = 3;
		else if (str1 == "E") t1 = 4;
		else if (str1 == "F") t1 = 5;
		else if (str1 == "G") t1 = 6;
		else if (str1 == "H") t1 = 7;

		t2 = atoi(str2.c_str()) - 1;
		if (str3 == "A") t3 = 0;
		else if (str3 == "B") t3 = 1;
		else if (str3 == "C") t3 = 2;
		else if (str3 == "D") t3 = 3;
		else if (str3 == "E") t3 = 4;
		else if (str3 == "F") t3 = 5;
		else if (str3 == "G") t3 = 6;
		else if (str3 == "H") t3 = 7;

		t4 = atoi(str4.c_str()) - 1;
		table[t1][t2] = 3;
		table[t3][t4] = 4;
		//cout <<  t1<< t2 <<t3<< t4 << endl;
		if (t1>8 || t2>8 || t3>8 || t4>8) printf("Impossible\n");
		else if (str1 == str3&&str2 == str4) {
			printf("0 ");
			cout << str1 << " " << str2;
		}
		else if (((t1 + t2) % 2) != ((t3 + t4) % 2)) printf("Impossible\n");
		else {
			star(table, t1, t2, 3);
			/*cout << "mang 1:" << endl;
			for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 8; ++j)
			cout << "  " << table[i][j] << "  ";
			cout << endl;
			}
			cout << "i j ban dau";
			printf("i=%d  ,j=%d\n", iii, jjj);*/
			if (flag == 1) {
				printf("%d ", cnt);
				cout << str;

			}
			else {
				star(table, t3, t4, 4);
				/*cout << "mang 2:" << endl;
				for (int i = 0; i < 8; ++i) {
				for (int j = 0; j < 8; ++j)
				cout << "  " << table[i][j] << "  ";
				cout << endl;
				}*/
				if (flag == 1)
					//printf("i=%d  ,j=%d\n", iii, jjj);
					printf("%d %c %c %c %d %c %c", cnt, str[0], str[2], keys[iii], jjj + 1, str[4], str[6]);
			}
			cout << endl;
		}

	}

	cin >> flag;
	return 0;
}