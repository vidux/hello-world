
#include <iostream>
using namespace std;

int main()
{

   enum color {RED, GREEN, BLUE};
    switch(2) {
        case RED:   cout << "red\n"; break;
        case GREEN: cout << "green\n"; break;
        case BLUE:  cout << "blue\n"; break;
    }
    return 0;
}
