#include <iostream>
#include<cstdlib>
#include <cmath>
using namespace std;

bool ok(int q[], int col) {
	for (int i = 0; i<col; i++) {
		if ((q[i] == q[col]) || (abs(q[col] - q[i]) == (col - i)))
		{
			return false;
		}
	}
	return true;
}//boolean function ends here
void backtrack(int &col) {
	col--;
	if (col == -1) exit(1);
}//backtrack function ends here

void print(int q[])
{
	static int count = 0;
	count++;
	int i, j, board[8][8] = { 0 };
	cout << "#" << count << endl;
	for (i = 0; i<8; i++)
	{
		board[q[i]][i] = 1;
	}

	for (i = 0; i<8; i++)                 //final print board
	{
		for (j = 0; j<8; j++)
			cout << board[i][j] << " ";

		cout << endl;
	}

}// Print function ends here

int main()
{
	int q[8]; q[0] = 0;
	int c = 1;
	// from_backtrack keeps track if we need to reset the row to the
	// top of the current colum or not.

	bool from_backtrack = false;
	// The outer loop keep looking for solutions
	// The program terminates from function backtrack
	// when we are forced to backtack into column -1
	while (1) {
		while (c<8) { //this loop goes across columns
					  // if we just returned from backtrack, use current value of row
					  // otherwise get ready to start at the top of this column
			if (!from_backtrack) // we did not just return from backtrack
				q[c] = -1;   //check here
			from_backtrack = false;
			while (q[c]<8) { // place queen in this column
				q[c]++;
				// if row=8, there is no valid square in this column
				// so backtrack and continue the loop in the previous column


				while (q[c] == 8)
				{
					backtrack(c);
					q[c]++;

				}
				//if this position is ok, place the queen
				// and move on (break) to the next column,
				// otherwise keep looking in this column

				if (ok(q, c))
					break;

			}// while q[c]<8
			c++; // placed ok, move to the next column
		}//while(c<8)
		 // one complete solution found, print it.
		print(q); // board completed, print it out
		system("pause");
		backtrack(c);
		from_backtrack = true;
	}//while(1)

}//main method