#include <iostream>

using namespace std;
struct Employee{
int emp_no;
string emp_name;
float emp_sal;
}emp,ll;
int main()
{
emp.emp_name="dsfdf";
emp.emp_sal=2223;
ll.emp_name="kk";

cout << ll.emp_name <<endl;
cout << emp.emp_name<< endl;
}


