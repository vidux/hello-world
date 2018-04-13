#include <iostream>

using namespace std;

int g(int x){
int value;
value = 2*(x*x)-(3*x)+5;
return value;
}
int main()
{
 int d;
 cin >> d;
 g(d);
 cout << d;
}
