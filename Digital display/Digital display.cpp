/*
Name: digital display
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:dùng  một map để lưu các số và ký tự cần in tương ứng sau đó, duyệt số và in từng dòng 1.
Date and time :25/06/2016
*/

#include<cstdio>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>
#include<vector>
#include<map>
#include<time.h>

using namespace std;

inline
void use_io_optimizations()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
}

const map<char,vector<string>> display{
	{'0',{"+---+",
		  "|   |",
		  "|   |",
		  "+   +",
		  "|   |",
		  "|   |",
		  "+---+"}},
	{'1',{"    +",
		  "    |",
		  "    |",
		  "    +",
		  "    |",
		  "    |",
		  "    +" } },
	{'2',{"+---+",
		  "    |",
		  "    |",
		  "+---+",
		  "|    ",
		  "|    ",
		  "+---+" } },
	{'3',{"+---+",
		  "    |",
		  "    |",
		  "+---+",
		  "    |",
		  "    |",
		  "+---+" } },
	{'4',{"+   +",
		  "|   |",
		  "|   |",
		  "+---+",
		  "    |",
		  "    |",
		  "    +" } },

	{'5',{"+---+",
		  "|    ",
		  "|    ",
		  "+---+",
		  "    |",
		  "    |",
		  "+---+" } },
	{'6',{"+---+",
		  "|    ",
		  "|    ",
		  "+---+",
		  "|   |",
		  "|   |",
		  "+---+" } },
	{'7',{"+---+",
		  "    |",
		  "    |",
		  "    +",
		  "    |",
		  "    |",
		  "    +" } },
	{'8', {"+---+",
           "|   |",
           "|   |",
           "+---+",
           "|   |",
           "|   |",
           "+---+"}},
	{'9', {"+---+",
           "|   |",
           "|   |",
           "+---+",
           "    |",
           "    |",
           "+---+"}},
	{':', {" ",
           " ",
           "o",
           " ",
           "o",
           " ",
           " "}},
	{' ', {"  ",
           "  ",
           "  ",
           "  ",
           "  ",
           "  ",
           "  "}}
};
int main() {
	use_io_optimizations();
	string time;
	cin >> time;
	while (time != "end") {
		for (int i = 0; i < 7; ++i) {
			for (auto j = time.cbegin(); j != time.cend(); ++j) {
				if (j != time.begin()) {
					cout << display.at(' ')[i];
				}
				cout << display.at(*j)[i];
			}
			cout << endl;
		}
		cout << endl<< endl;
		cin >> time;
	}
	cout << "end" << endl;
	//cin >> time;
	return 0;
}