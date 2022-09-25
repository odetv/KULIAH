#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main ()
{
 char Opr;
 double A, B;
 
 cout << "Welcome To The calculator Program" << endl;
 cout << "=======================================================" << endl;
 cout << "here's' the menulist:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiplay " << endl;
    cout << "4. Divide two number" << endl;
    
    cout << "Make Your choice using operator Symbol (+,-,*,/) : ";
    cin >> Opr;
    
    cout << "enter number of A and B please :";
    cin >> A >> B;
}
    switch (Opr){
     case '+':
      if  (A >= 0 && A <= 10 && B >= 0 && B <= 10)
	  {
   cout << A << "+" << B << "=" << (A+B);
  }
  else {cout << "Sorry, this program only can use number from 0 to 10";

      break;
    case '-':
      cout << A << "-" << B << "=" << (A-B);
      break;
    case '*':
      cout << A << "*" << B << "=" << (A*B);
      break;
    case '/':
      cout << A << "/" << B << "=" << (A/B);
      break;
    
    default:
     cout << Opr << "is an invalid operator";
 }
}
