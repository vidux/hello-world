#include <iostream>

using namespace std;

int CalcSum(int number1,int number2)
{
    return (number1+number2);
}
int main()
{
    int n1,n2;
cout << "enter numbers to get sum :" <<endl;
cin >> n1;
cin >> n2;
cout << "answer : " << CalcSum(n1,n2);

}
