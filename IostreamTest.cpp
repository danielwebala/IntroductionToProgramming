#include <iostream>
#include <string>
using namespace std;

int main() {
   string name;
   int age;
   string city;
   string email;
   
   cout << "............ Create a profile ..............." << endl;
   cout << "Enter your name: ";
   cin >> name;
   cout << "Enter your age: ";
   cin >> age;
   cout << "Enter city: ";
   cin >> city;
   cout << "Enter email: ";
   cin >> email;
   cout << "............ My profile ..............." << endl;
   cout << "Name: " << name << endl;
   cout << "Age: " << age << endl;
   cout << "City: " << city << endl;
   cout << "Email: " << email << endl;

   // cerr << "This is an example of an error message"  << endl;
   cout << "........... End of profile ..........." << endl;
   return 0;
}