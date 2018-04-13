#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3;
    cout << "enter 1st number: \n";
    cin >> n1;
    cout << "enter 2nd number:  \n";
    cin >> n2;
    cout << "enter 3rd number:  \n";
    cin >> n3;

    if (n1 > n2 && n1 > n3){
        cout << "maximum number is: " << n1;
    }
    else if (n2 > n3){
        cout << "maximum number is: "<<n2;
    }
    else{
        cout << "maximum number is: " << n3;
    }


    return 0;
}
