/*
Name:
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:
Date and time :
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

void decrea(int coin[], int &paid, int &index1, int &index2,int price) {
	while (paid > price) {
		paid -= coin[index1];
		if (paid < price) {
			paid += coin[index1];
			return;
		}
		else index1++;
	}
}
int main() {
	use_io_optimizations();
	fstream fi, fo;
	fi.open("input.txt", ios::in);
	fo.open("output.txt", ios::out);
	int n, amount, price;
	int	coin[10000];
	fi >> n;
	
	for (int N = 0; N < n; ++N) {
		fi >> price;
		fi >> amount;
		for (int i = 0; i < amount; ++i) {
			fi >> coin[i];
		}
		
		
	}

	return	0;
}