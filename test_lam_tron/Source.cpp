#include <iostream>
#include <iomanip>
#include <conio.h>
#include<cstdio>
using namespace std;
int main()
{
	cout << "CHI TIE^U" << endl << "=======" << endl;
	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << "Sa'ch vo" << setw(20) << 123.456 << endl;
	cout << "Thuc an" << setw(21) << 2453.6 << endl;
	cout << "Quan a'o lanh" << setw(15) << 3200.0 << endl;
	_getch();
	return 0;
}