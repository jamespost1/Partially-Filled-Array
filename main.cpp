//These are the definitions for the member functions for the class 
 //They require the following include and using directives: 3 
#include <iostream>
#include "PFArrayD.h"
 using namespace std;
   int main( )
  {
      cout << "This program tests the class PFArrayD.\n";
 string ans;
 do
 { 
testPFArrayD( );
cout << "would you like to test it again? (yes/no) ";
cin >> ans;
} while ((ans == "yes") || (ans == "Yes"));
return 0;
     }

 
  