#include <iostream>

// 10960685 JANET POAKWAA DARKWA

using namespace std;

int main()
{
    int even = 1, average = 0, sum = 0;
   while ( even++ <= 10000) {
   if( even%2 == 0) {
    sum += even;
    average ++;
   }
 }

 cout << " sum of all even numbers between 1 and 10000 is "<< sum << endl;

 cout << "average is "<< (sum /average ) << endl;

 return 0;
}




