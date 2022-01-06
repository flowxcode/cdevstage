/*
* Multiple line
* comment
*/
#include<iostream>

//Single line comment
using namespace std;


int main() { 

   int sum = 0;
   int counter = 0; 

   while (counter < 3) 
   {
      cout << "Please enter input:" << endl; 
      int input; 
      cin >> input; 
      if (cin.eof())
         break; 
      counter++; 
      sum = sum + input;
      cout << sum << endl;
   } 
   
   cout<<"Input entered: " <<endl;

   cout<<"Sum of the numbers in a list is: " << sum << endl;
   cout<<"counter: " << counter << endl;

   return 0;

}


