#include <iostream>
using namespace std;
int main()
{
  float n1,n2,n3,num;
  cout << "enter number 1:\n" ; cin >>n1;
  cout << "enter number 2:\n" ; cin >>n2;
  cout << "enter number 3:\n" ; cin >>n3;

  if(  n1 > n2 && n1 > n3  ) num=n1;
  else if (n2>n3) num=n2;
  else num=n3;

  cout <<endl << num <<" is the maximum number\n";
}

/**
< explaining @if >
1st we check n1 with n2 to find what is the maximum number. (side left)
2nd we check n1 with n3 to find what is the maximum number.(side right)
we use @&& (AND operator) to find both sides are @true. if both sides true, output is n1 is maximum. if one of side
is false we know n1 not the maximum number so we remove n1 from our check list. so now we only have n2 and n3
we check n2 with n3 what is the maximum number if it is true n2 is the maximum number if false it must be
n3
*/
