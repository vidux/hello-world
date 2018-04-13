#include <iostream>

using namespace std;

int main()
{
  int d=5;
  int s[d];

  for(int i=0;i<d;i++){
    cin >>s[d];
  }


  for(int i=0;i<d;i++){
    for(int j=0;j<d;j++){
        if(s[i]==s[j]){

            cout << s[i]<<endl;
        }

    }


  }


}
