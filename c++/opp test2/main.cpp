#include <iostream>

using namespace std;


class candidate{
protected:
   long RNo;
   float score;
   string name,remark;

void AssignRem(){

if (score >=50 ){
    remark="selected";
}else{
remark="Not selected";

    }

}

public:
    candidate(string index){

    }
    void ENTER() {
 cout << "enter name: " ;
 cin >> name;
   cout << "enter registration number: " ;
   cin >> RNo;
 cout << "enter score: " ;
  cin >> score;

  AssignRem();
    }
void DISPLAY(){
cout << "name: " << name <<endl;
cout << "registration No: " << RNo << endl;
cout << "score: " << score << endl;
cout << "remark: " << remark << endl;

}



};











int main()
{

 candidate ak("ha");









    return 0;
}
