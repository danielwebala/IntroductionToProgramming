/*Implicit(automatic conversion) vs
Explicit(operatoor conversion)*/
#include <iostream>
using namespace std;

int main()
{
   int num1 = 10, num2 = 30;
   bool var1 = true, var2 = false;

   cout << "**Arithmetic operations**" << endl;
   // sum +
   cout << "The sum of the two numbers: " << num1 + num2 << endl; 

   // difference -
   cout << "The difference of the two numbers: " << num1 - num2 << endl;

   // product *
   cout << "The product of the two numbers: " << num1 * num2 << endl;

   // division /
   cout << "Division of the two numbers: " << (float)(num1 / num2) << endl;

   // modulus %
   cout << "The modulus of the two numbers: " << num1 % num2 << endl;

   // increment ++
   cout << "The increment of num1: " << num1++ << endl;

   cout << "**Comparision operations**" << endl;

   //Greater than >
   cout << "Num1 is greater than num2 " << (bool)(num1 > num2) << endl;
   //less than <
   cout << "Num1 is less than num2 " << (bool)(num1 < num2) << endl;
   //Equal ==
   cout << "Num1 is equal to num2 " << (bool)(num1 == num2) << endl;
   //Equal ==
   cout << "Num1 is not equal to num2 " << (bool)(num1 != num2) << endl;

   cout << "**Boolian operations**" << endl;
   cout << var1 << " && " << var2 << " = " << (bool)(var1 && var2) << endl;
   cout << var1 << " || " << var2 << " = " << (bool)(var1 || var2) << endl;
   return 0;
}