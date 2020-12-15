#include<iostream>
using namespace std;

int main(){
   int integer = 1;
   int even = 0;
   int odd = 0;
   while(integer != 0){
   cout << "Enter an integer: ";
   cin >> integer;
   if(integer%2 == 1)
   {
   odd++;
   }
   else if(integer == 0)
   {
   odd = odd+0;
   even = even+0;
   }
   else
   {
   even++;
   }
    }
    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}