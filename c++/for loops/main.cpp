#include <iostream>
using namespace std;


int main(){

int mini=1;
for(int i=0;i<5;i++){
    for(int j=4;j>i;j--){

        cout << " ";
    }
    for(int k=0;k<mini;k++){

        cout << "*";
    }

    mini+=2;
    cout <<endl;
}












return 0;
}
