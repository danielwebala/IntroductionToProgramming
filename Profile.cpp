#include <iostream>
#include <string>
using namespace std;

// THis is a simple profile programm

int main()
{
   // Get the profile details from the user
   string firstName, lastName, fullName, favouriteMeal, favouriteMovie, university, course, unit;
   
   cout << "**Create your profile**" << endl;
   cout << "Enter your first name" << endl;
   getline(cin, firstName);
   cout << "Enter your last name" << endl;
   getline(cin, lastName);
   cout << "Enter your full name" << endl;
   getline(cin, fullName);
   cout << "Enter your favourite meal" << endl;
   getline(cin, favouriteMeal);
   cout << "Enter your favourite movie" << endl;
   getline(cin, favouriteMovie);
   cout << "Enter your univeristy" << endl;
   getline(cin, university);
   cout << "Enter your course" << endl;
   getline(cin, course);
   cout << "Enter your unit" << endl;
   getline(cin, unit);

   // Output the profile details
   cout << "\n\nYour profile" << endl;
   cout << "First name: " << firstName << endl;
   cout << "Last name: " << lastName << endl;
   cout << "Full name: " << fullName << endl;
   cout << "Favourite meal: " << favouriteMeal << endl;
   cout << "Favourite movie: " << favouriteMovie << endl;
   cout << "Univeristy: " << university << endl;
   cout << "Course: " << course << endl;
   cout << "Unit: " << unit << endl;
   return 0;
}