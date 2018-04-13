#include <iostream>
using namespace std;

class Vehical
{
protected:
 string Make;
 string Model;
 int Year;
public:
 void setDetails()
 {
 cout<<"Enter Vehicle Brand Name: ";
 cin>>Make;
 cout<<"Enter Vehicle Model: ";
 cin>>Model;
 cout<<"Enter Manufacturing Year: ";
 cin>>Year;

 }

};

class Van:public Vehical
{
private:
 int seats;
public:
 void printData()
 {
 cout<<" Vehicle Brand Name: "<<Make<<endl;
 cout<<" Vehicle Model: "<<Model<<endl;
 cout<<" Manufacturing Year: "<<Year<<endl;
 cout<<" Number of seats: "<<seats<<endl;
 }

 void  setDetails()
 {
 cout<<"Enter Vehicle Brand Name: ";
 cin>>Make;
 cout<<"Enter Vehicle Model: ";
 cin>>Model;
 cout<<"Enter Manufacturing Year: ";
 cin>>Year;
 cout<<"Enter number of seats: ";
 cin>>seats;
 }


};

int main()
{
Van JT_8834;
 JT_8834.setDetails();
 JT_8834.printData();
 return 0;
}
