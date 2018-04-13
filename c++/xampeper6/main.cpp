#include <iostream>

using namespace std;



int main()
{
char chr= '@';
char spc= ' ';
int ct = 5;
int bt =-1;


for (int i = 0; i < 4; i=i+1){
ct-=1;
for (int k =0; k < ct ;k=k+1){
    cout << spc;
}
bt=bt+2;
  for (int d=0; d < bt;d=d+1){
    cout << chr;
    }

cout << endl;

}

for (int i = 0; i < 4; i=i+1){

for (int k =0; k < ct ;k=k+1){
    cout << spc;
}
  for (int d=0; d < bt ;d=d+1){
    cout << chr;
    }
bt=bt-2;
cout << endl;
ct+=1;
}


}
