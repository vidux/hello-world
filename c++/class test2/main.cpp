#include <iostream>

using namespace std;

class student{
private:
    string name;
    int YOB;
    float SGPA;


public:
    //set methods
    void setName(string nm){
    name=nm;
    }
    void setYearOfBirth(int yob){
    YOB=yob;
    }
    void setSGPA(float sgpa){
    SGPA=sgpa;
    }
    //get methods
    string getName(){
    return name;
    }
    int getYearOfBirth(){
    return YOB;
    }
    float getSGPA(){
    return SGPA;
    }

int ApproximateAge(int year){

return year-YOB;
}

float avgMarks(float subject1,float subject2,float subject3,float subject4){
float total = subject1+subject2+subject3+subject4;
return (total/4.0);
}


};




int main()
{

    student anura;

    anura.setName("anura kumara");
    anura.setYearOfBirth(1995);
    anura.setSGPA(3.4);
    //below things are optional
cout <<"age " << anura.ApproximateAge(2018)<<endl;
cout <<"avg marks " << anura.avgMarks(55,53,61,95.4)<<endl;

    return 0;
}
