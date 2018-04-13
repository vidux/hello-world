#include <iostream>
enum Month {
	a = 2, b, c, d, e, f,
	g, h, i, j, k, l
};
using namespace std;
int main()
{


	Month f = l;
	Month j = e;

	cout << "f = " << f << endl;
//	f = 2;                  // error: cannot convert from 'int' to 'Month'
	int jj = j;             // allowed: can get the numeric value of a 'Month'
	Month jjj = Month(7);   // Convering int to 'Month'

	cout << "jj = " << jj << ", jjj = " << jjj << endl;
	return 0;
}
