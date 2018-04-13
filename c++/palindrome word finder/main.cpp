#include <iostream>

using namespace std;

int main()
{

string input;

cout << "Please enter a string: ";
cin >> input;

int a= input.length()-1;
bool x = true;

for(int b=0;b <a;b++){
    if(input[a]!=input[b]){
x= false;


    }

a--;
}

if(x)
cout << input << " is palindrome \n";
else
cout << input << " is not palindrome \n";



    return 0;
}
