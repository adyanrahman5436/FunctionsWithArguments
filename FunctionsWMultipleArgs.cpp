/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void showSum (int num1, int num2, int num3)
{
  cout << "The sum of " << num1 << ", " << num2 << " and " << num3 << " is "
    << (num1 + num2 + num3) << endl;
  return;
}

int main()
{
   int value1, value2, value3;
   
   cout << "Enter a whole number: ";
   cin >> value1;
   cout << "Enter another whole number: ";
   cin >> value2;
   cout << "Enter a third whole number: ";
   cin >> value3;
   showSum(value1, value2, value3);
   cout << endl;
   showSum(20, value1 + value2, 39);
   return 0;
}

