#include <iostream>

using namespace std;

int main()
{
float iprice,totalprice,avgprice;

for(int i = 1; i <=5;i++){
    cout << "enter price of item:" << i <<endl;
    cin >> iprice ;
    totalprice+=iprice;
}
avgprice = totalprice / 5;
cout << "total price(Rs.) :"  << totalprice <<endl;
cout << "average price(Rs.) :" << avgprice <<endl;

}
