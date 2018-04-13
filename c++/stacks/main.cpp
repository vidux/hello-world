#include <iostream>

using namespace std;

class stack{

int stk[5];
int top;


public:
    stack(){
    top=-1;
    }

    void push(int x){
    if(top > 3){

        cout << "***stack over full****\n";
        return;

    }

    stk[++top]=x;
    cout << "inserted " << x <<endl;


    }

void pop(){

    if(top <0){

        cout << "***stack is empty!***\n";
        return;
    }

    cout << "deleted " << stk[top--] <<endl;



    }


    void display(){
      if(top <0){

        cout << "***stack is empty!***\n";
        return;
    }

    for(int i=0;i<=top;i++){
        cout << stk[i] << " " ;



    }
    cout << endl;



    }




};



int main(){
stack ss;
while(true){
cout << "[1.push, 2.pop, 3.display, other exit]\n enter your choice \n";
int ch;
cin >> ch;
switch(ch){

case 1:
    int num;
    cout << "enter number to add\n";
    cin >> num;
ss.push(num);
ss.display();

break;
case 2:
    ss.pop();
    ss.display();
    break;

case 3:
    ss.display();









}
















}









}




