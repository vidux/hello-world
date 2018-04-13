#include <iostream>

using namespace std;
/**
altanative answer by vibrate. for exam IT 1003(introduction to programing - 2013 in question >06(b)
*/

int main()
{

/**  1st declare array called 'number' and then store 15 any elements(integers)
[              1  2  3  4  5  6  7  8  9  10  11  12  13  14  15                    */
int number[]={75 ,45,65,78,90,87,43,25,63,96, 21, 4, 324, 3, 432};
/**
ii) output the value of tenth element(keep in your mind all arrays begin with 0. so if we need to get value of
tenth element, me must use as =number[9])
*/
cout << number[9] <<endl;

/** iii) set the value of fifth element of array to 25 */
number[4]=25;
/** iv) set the value of ninth of the array to sum of sixth and seventh elements */
number[8]=number[5]+number[6];
/** v) set the value of fourth element of the array to three times the value of 8 element */
number[3]=number[7]*3;


/** vi) output array 'number' so that five elements per line */

for( int n=0; n<15;++n){/** 1st loop till 14 */

   for (int n1=0;n1<5;++n1){/** 2nd loop till 4 */

    cout << number[n]<<" ";
   n=n+1;
   }

   n=n-1;
/** after completing 1 round separate by line*/
   cout <<endl;
}
}

