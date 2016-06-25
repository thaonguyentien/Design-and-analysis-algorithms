/*
Name: Cookie Selection
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description:su dung mot set de luu cac duong kinh cua banh cookie. khi gap dau # thi dua ra banh tai vi tri median.
Truoc khi dua ra banh do neu kich thuoc cua set la le thi cho median++ nguoc lai median--.
khi gap mot so thhi dua so do vao. SAu khi dua so do vao neu kich thuoc cua set la chan kiem tra phan tu dua vao 
neu lon hon hoac bang median thi median++ nguoc lai median khong doi. neu sau khi dua vao ma kich thuoc median la le 
kiem tra phan tu moi dua vao neu nho hon median thi median-- nguoc lai median khong doi.
Date and time : 9h 24/06/2016
*/

#include<cstdio>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>
#include<vector>
#include<set>
#include<time.h>

using namespace std;

inline
void use_io_optimizations()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
}

int main() {
	use_io_optimizations();
	multiset<int> s;
	multiset<int>::iterator median,temp_median;
	
	string cookie;
	getline(cin, cookie);
	while (cookie != "\0") {
		if (cookie == "#") {
			cout << *median << endl;
			temp_median = median;
			if (s.size() % 2 == 1) {
				median++;
			}
			else median--;
			s.erase(temp_median);
		}
		else {
			int temp = stoi(cookie);
			s.insert(temp);
			if (s.size() == 1) median = s.begin();
			else if (s.size() % 2 == 1) { //luu y size nay la sua khi da insert 
					if (temp < *median) median--;
					
			}
			else {
				if (temp >= *median) median++;
			}
		}
		getline(cin, cookie);
	}
	//string nothing;
	//cin >> nothing;
	return 0;	
}