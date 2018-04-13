#include <iostream>

using namespace std;

void point(int &a,int &b){
int tmp=a;
a=b;
b=tmp;

}
int main()
{
int a=10;
int x=20;
point(a,x);

cout << a << " " << x << endl;
}


