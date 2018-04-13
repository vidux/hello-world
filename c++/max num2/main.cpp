#include <iostream>

using namespace std;

int main()
{
int maxn;
int n1,n2,n3;
cout << "enter 1st number \n";
cin >> n1;
cout << "enter 2nd number \n";
cin >> n2;
cout << "enter 3rd number \n";
cin >> n3;

maxn = n1;
if (n2 > maxn){
    maxn=n2;
}
if (n3 > maxn){
    maxn =n3;
}
cout << "maximum number is: " << maxn << endl;
}
