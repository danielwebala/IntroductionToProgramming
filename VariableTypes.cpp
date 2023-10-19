#include <iostream>
#include <string>
using namespace std;


//Global variables
int globalVariable = 30;
const int age = 25; //Constant global variable

void myFunction () {
   //Local variables
   int localVar1 = 30, localVar2 = 40;
   string localString1 = "Local string 1", localString2 = "Local string 2";
   cout << "localVar1 = " << localVar1 << endl;
}

void addAndDisplay(int value1, int value2) {
   int sum = value1 + value2;
   cout << "The sum is = " << sum;
}

int main() {
   cout << "global variable: " << globalVariable << endl;
   cout << "global variable age = " << age << endl;
   //age = 70;  Will error out as this value is read only
   myFunction();
   addAndDisplay(1, 4);
   return 0;
};