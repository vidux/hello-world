#include <iostream>

using namespace std;
const int stk=5;
class stack{
private:

int top;
int stak[stk];

public:
    stack(){
    top=-1;

    }
    void push(int x){
    if(isfull()){
        cout << "stackoverflow\n";
    }else{
    top++;
    stak[top]=x;
      cout << "aded " << x << endl;
    }

    }

    bool isempty(){
    return (top==-1);
    }

    bool isfull(){
    return(top==stk-1);
    }

    void pop(){
    if(isempty()){

         cout << "stackunderflow\n";
    }else{
    stak[top]=NULL;
    top--;
     cout << "removed!\n";
    }
    }

    void display(){
    if(isempty()){
     cout << "stackunderflow\n";
    }else{
        for(int i=0;i<=top;i++){
            cout << stak[i] << " ";

        }
        cout << endl;
    }
    }


};








int main()
{


stack yo;
yo.push(1);
yo.push(23);
yo.pop();
yo.push(34);
yo.push(37);
yo.display();
yo.push(34);
yo.push(37);
yo.push(34);
yo.push(37);
yo.push(34);
yo.push(37);
yo.push(34);
yo.push(37);
yo.display();

    return 0;
}
