#include <iostream>

using namespace std;

int main()
{
  char* x="z++";
  cout << "String is " << x<< endl;
  cout << "De-referenced char pointer is "<< *x <<endl;
  x++;
  cout << "string after incrementing is " << x << endl;
  cout << "dereferenced char pointer is now " << *x <<endl;
  x++;
cout << "string after second incrementing is " << x <<endl;

}
