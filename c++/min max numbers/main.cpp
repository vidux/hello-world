#include <iostream>

using namespace std;

int main()
{

  int n[]={15,2,55,5,89,9,94,98,68,98,56,6,1,2,3,4,7,8,77,66};

  int Min=n[0];
  int Max=n[0];

    for(int i=0;i<20.;i++){
        if(n[i]>Max){
            Max=n[i];
        }

         if(n[i]<Min){
            Min=n[i];
        }



    }

   cout << "min number is " << Min <<endl;
   cout << "max number is " << Max <<endl;
}
