#include <iostream>

using namespace std;

int main()
{
  int d;


  try {

 cin >> d;
 d=d%3;
 cout << d;
  }



  catch(exception& j){
  cout <<j.what() ;
  }
}
