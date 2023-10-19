#include <iostream>
using namespace std;

int main() {
   int num1, num2;

   cout << "This is a simple calculator:" << endl;

   cout << "Enter the first number: " << endl;
   cin >> num1;
   cout << "Enter the second number: " << endl;
   cin >> num2;

   float divideResult = num1 / num2;
   int sum = num1 + num2;
   int diff = num1 - num2;
   int prod = num1 * num2;


   cout << num1 << " + " << num2  <<" is " << sum << endl;
   cout << num1 << " * " << num2  <<" is " << prod << endl;
   cout << num1 << " - " << num2  <<" is " << diff << endl;
   cout << num1 << " / " << num2  <<" is " << divideResult << endl;

   return 0;
};