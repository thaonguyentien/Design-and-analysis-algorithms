/*
Name:I can guess data structure
Author:NTT_TNN
Vesrion:
Copyright:nguyentienthao96@gmail.com
Description: voi moi phan tu ta lan luot dua vao stack, queue, va queue_priority.
ta lan luot dung 4 mang. 1 mang luu  cac output theo de bai 3 mang con lai luu voi 
truong hop stack,queue, và queue_priority de doi chieu. neu co >1 mang giong nhau thi in ra not sure,
neu co 1 mang bang nhau thi in ra loai cau truc tuong ung neu khong co thi in ra impossible.
chu y: truong hop stack,queue,queue_priority rong ma van push.
Date and time : 17h 24/06/2016
*/

#include<cstdio>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>
#include<vector>
#include<stack>
#include<queue>
#include<time.h>
// chu y truong hop out nhieu phan tu hon in
using namespace std;

inline
void use_io_optimizations()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
}

int main() {
	use_io_optimizations();
	int out[1001],out_stack[1001],out_queue[1001],out_queue_pri[1001];
	stack<int> my_stack;
	queue<int> my_queue;
	priority_queue<int> my_queue_pri;
	fstream fi, fo;
	fi.open("input.txt", ios::in);
	fo.open("output.txt",ios::out);
	int index=0,cnt1,cnt2;
	int flag = 0,fs=1,fq=1,fqp=1;
	int cnt;
	fi >> cnt;
	for (; cnt < 2000;) {
		while (!my_stack.empty()) {
			my_stack.pop();
		}
		while (!my_queue.empty()) {
			my_queue.pop();
		}
		while (!my_queue_pri.empty()) {
			my_queue_pri.pop();
		}
		cnt1 = 0;
		cnt2 = 0;
		index = 0;
		fs = 1, fq = 1, fqp = 1;
		for (int i = 0; i < cnt; ++i) {
			int a1, a2;
			fi >> a1 >> a2;
			if (a1 == 1) {
				my_stack.push(a2);
				my_queue.push(a2);
				my_queue_pri.push(a2);
				cnt2++;
			}
			else {
				if (my_stack.size() == 0) {
					fo << "impossible" << endl;
					return 0;
				}
				out[index] = a2;
				out_stack[index] = my_stack.top();
				my_stack.pop();
				out_queue[index] = my_queue.front();
				my_queue.pop();
				out_queue_pri[index] = my_queue_pri.top();
				my_queue_pri.pop();
				cnt1++;
				index++;
			}
		}
		for (int i = 0; i < cnt1; ++i) {
			if (out[i] != out_stack[i]) {
				fs = 0;
				break;
			}
		}
		/*cout << "out" << endl;
		for (int i = 0; i < cnt1; ++i) {
			cout << " " << out[i];
		}
		cout << "out_stack" << endl;
		for (int i = 0; i < cnt1; ++i) {
			cout << " " << out_stack[i];
		}
		cout << "out_queue" << endl;
		for (int i = 0; i < cnt1; ++i) {
			cout << " " << out_queue[i];
		}
		cout << "out_queue_pri" << endl;
		for (int i = 0; i < cnt1; ++i) {
			cout << " " << out_queue_pri[i];
		}*/
		for (int i = 0; i < cnt1; ++i) {
			if (out[i] != out_queue[i]) {
				fq = 0;
				break;
			}
		}
		for (int i = 0; i < cnt1; ++i) {
			if (out[i] != out_queue_pri[i]) {
				fqp = 0;
				break;
			}
		}
		if(cnt1>cnt2) fo<< "impossible" << endl;
		else if (fs + fq + fqp > 1) fo << "not sure" << endl;
		else {
			if (fs == 1) fo << "stack" << endl;
			else if(fq == 1) fo << "queue" << endl;
			else if (fqp == 1)fo << "priority queue" << endl;
			else fo << "impossible"<<endl;
		}
		fi >> cnt;
	}

	return 0;
}