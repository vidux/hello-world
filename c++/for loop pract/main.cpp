#include <iostream>

using namespace std;

int main()
{
   int data[10];
int max, maxindex, count=0;


cout << "enter 10 integer numbers: \n";
   for(int i=0;i<10;i++){
    cout << "enter number " << i+1 << ": ";
    cin >> data[i];
   }


    max=data[0];

   for(int i=0;i<10;i++){
    if(max<data[i]){
        max=data[i];
        maxindex=i;
    }

     if(data[i]>=50){
                count++;
        }

   }



   cout << "\n count of numbers greater than or equeal 50:     " <<count<<endl;
   cout << "maximum number is " << max << " , index : " << maxindex << endl;
return 0;
}
