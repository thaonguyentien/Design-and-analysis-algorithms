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
#include<conio.h>

using namespace std;
int table[7][7];
int iii=-1, jjj=-1;
int flag = 0,cnt=0;
char keys[9] = {'A','B','C','D','E','F','G','H' };
void star(int a[][7], int i, int j,int number) {
	//cout << "DAU HAM star:" << iii << "  " << jjj << endl;
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
			if (a[i][j] != 0&& i != ii && j != jj) {
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
		//cout << "ELSE 1 HAM star:" << iii << "  " << jjj << endl;
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
		//cout << "ELSE 2 HAM star:" << ii << "  " << jj << endl;
		while (i != -1 && j != -1 && j != 8 && i != 8) {
			if (a[i][j] != 0 && i != ii && j != jj) {
				iii = i;
				jjj = j;
				flag = 1;
				
				//cout << "ELSE 4 HAM star:" << i << "  " << j<< endl;
				return;
				
			}
			a[i++][j++] = number;
		}
		i = ii;
		j = jj;
		//cout << "ELSE 3 HAM star:" << iii << "  " << jjj << endl;
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
	//cout << "CUOI HAM star:" << iii << "  " << jjj << endl;
}

void seperate(string str, string &t1, string &t2, string &t3, string &t4) {
	int i = 0, c = 0;
	int len = str.length();
	int j = 0;
	while (str[i++] != ' ') {
		if (i > len) {
			flag = 0;
			return;
		};
		c++;
	}
	t1 = str.substr(j, c);

	j = i;
	c = 0;
	while (str[i++] != ' ') {
		if (i > len) {
			flag = 0;
			return;
		};
		c++;
	}
	t2 = str.substr(j, c);
	j = i;
	c = 0;
	while (str[i++] != ' ') {
		if (i > len) {
			flag = 0;
			return;
		};
		c++;
	}
	t3 = str.substr(j, c);

	j = i;
	c = 0;
	while (str[i++] != '\0') {
		if (i > len) {
			flag = 0;
			return;
		};
		c++;
	}
	t4 = str.substr(j, c);
}
int main() {
	int t1=-1, t2=-1, t3=-1, t4=-1;
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
		
		seperate(str, str1, str2, str3, str4);
		if		(str1 == "A") t1 = 0;
		else if (str1 == "B") t1 = 1;
		else if (str1 == "C") t1 = 2;
		else if (str1 == "D") t1 = 3;
		else if (str1 == "E") t1 = 4;
		else if (str1 == "F") t1 = 5;
		else if (str1 == "G") t1 = 6;
		else if (str1 == "H") t1 = 7;

		t2 = atoi(str2.c_str())-1;
		if		(str3 == "A") t3 = 0;
		else if (str3 == "B") t3 = 1;
		else if (str3 == "C") t3 = 2;
		else if (str3 == "D") t3 = 3;
		else if (str3 == "E") t3 = 4;
		else if (str3 == "F") t3 = 5;
		else if (str3 == "G") t3 = 6;
		else if (str3 == "H") t3 = 7;
		
		t4 = atoi(str4.c_str())-1;
		cout << t1 << t2 << t3<<t4;
		cout << "mang -1:" << endl;
		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 8; ++j)
				cout << "  " << table[i][j] << "  ";
			cout << endl;
		}
		if (t1 >= 0 && t2 >= 0 && t3 >= 0 && t4 >= 0) {
			table[t1][t2] = 3;
			table[t3][t4] = 4;
		}
		else {
			printf("Impossible\n");
			return 0;
		}
		//cout << table[t1][t2] <<"   TABLE"<< table[t3][t4];
		cout << "mang 0:" << endl;
		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 8; ++j)
				cout << "  " << table[i][j] << "  ";
			cout << endl;
		}
		if(t1>7||t2>7||t3>7||t4>7) printf("Impossible\n");
		else if (str1 == str3&&str2 == str4) {
			printf("0 ");
			cout << str1<<" " << str2<<endl;
		}
		else if (((t1 + t2) % 2) != ((t3 + t4) % 2)) printf("Impossible\n");
		else {
			star(table, t1, t2, 3);
			cout << "mang 1:" << endl;
			for (int i = 0; i < 8; ++i) {
				for (int j = 0; j < 8; ++j)
					cout << "  " << table[i][j] << "  ";
				cout << endl;
			}
			cout << "i j ban dau";
			printf("i=%d  ,j=%d\n", iii, jjj);
			if (flag == 1) {
				printf("%d ",cnt);
				cout << str;
			
			}
			else {
				star(table, t3, t4, 4);
				cout << "mang 2:" << endl;
				for (int i = 0; i < 8; ++i) {
					for (int j = 0; j < 8; ++j)
						cout << "  " << table[i][j] << "  ";
					cout << endl;
				}
				if (flag == 1) 
					//printf("i=%d  ,j=%d\n", iii, jjj);
				printf("%d %c %c %c %d %c %d", cnt, str[0], str[2], keys[iii], jjj+1, str[4], t4+1);
			}
			cout << endl;
		}
		
	}
	
	_getch();
	return 0;
}