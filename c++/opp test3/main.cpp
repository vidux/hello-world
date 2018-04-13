#include <iostream>
using namespace std;

class student{

private:
string studentName, studentAddress, studentPhone;
    float assignmentMarks, examinationMarks,totalmarks=0;

void processMarks(){
  if (assignmentMarks >100 || examinationMarks>100){
    cout << "assignment marks or  examination marks must between 0-100" << endl;

   } else{
   totalmarks=(assignmentMarks+examinationMarks)/2;
}

}
public:
student(string stname,string stadress,string stphoneNo){

studentName=stname;
studentAddress=stadress;
studentPhone=stphoneNo;




}
void inputMarks(){
    assignmentMarks=0;
    examinationMarks=0;
  cout << "enter " << studentName << " 's  assignment marks: " ;
cin >>assignmentMarks;
  cout << "enter " << studentName << " 's  examination marks: " ;
cin>>examinationMarks;
}

void printMarks(){
    processMarks();
    cout << "student name: " << studentName <<endl;
    cout << "student address: " << studentAddress <<endl;
    cout << "student phone no: " << studentPhone <<endl;
cout << "total marks of " << studentName << " is " << totalmarks;
}
};













int main()
{
student kamal("kamal","colombo","079-2948277");

kamal.inputMarks();

kamal.printMarks();
}
