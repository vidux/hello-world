#include <iostream>

using namespace std;

int main()
{

 cout << "enter loop number\n";
 int dd;
 cin >> dd;
int tmp = dd;
 for (int i=1 ;i <=dd;++i){

        if (tmp==i){
        cout << "code matched welldone\n";break;
    }
    cout << tmp<< " kkkk "<<"("<<i<<")\n";
    tmp-=1;
 if (tmp==i){
        cout << "code matched welldone\n";break;
    }
 }
}
