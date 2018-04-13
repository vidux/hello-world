#include <iostream>

using namespace std;

int main()
{
   int tt[3]={1,3,2};
int temp;



    for(int i=0;i<3;i++){

       for(int j=0;j<3;j++){
       if(tt[j]>tt[i]) {
        temp=tt[j];
        tt[j]=tt[i];
        tt[i]=temp;

                }
cout << tt[i] <<endl;
              }

            }


        }



