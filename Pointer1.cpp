/*
 *  Pointer1.cpp
 *
 *  Created by Rob Nash
 *
 *  Modified by Yang Peng on 01/09/18
 */


#include <iostream>
using namespace std;


// Consider the call to display2() in main(), what's wrong with the call? 
//Line 26, it is calling a reference of aPtr whic his already referenced to int a.


void display1(int l, int m, int n, int o, int* p) {
  cout << "\ndisplay1():" << endl;
  cout << "var1 is " << l << endl;
  cout << "var2 is " << m << endl;
  cout << "var3 is " << n << endl;
  cout << "var4 is " << o << endl;
  cout << "address of \"l\" (var1) is " << &l << endl;
}

void display2(int l, int m, int n, int o, int& p) {
  cout << "\ndisplay2():" << endl;
  cout << "var1 is " << l << endl;
  cout << "var2 is " << m << endl;
  cout << "var3 is " << n << endl;
  cout << "var4 is " << o << endl;  
  cout << "address of \"l\" (var1) is " << &l << endl;
}

//Step 3
void display3(int m, int* p) {
 m = 500;
 *p = 600;
cout << *p << endl;
cout << p << endl;
cout << &p << endl;


}

int main()
{
  int a = 3;
  int b, c, d;
  int* aPtr, bPtr;  //Pitfall: note that bPtr is an int, not an int *
  b = 3;
  c = 5;
  d = a + b + c;
    
  
   aPtr = &a;
   // Your additional code here.
  //the only way i found to fix it was to assign it to the pointer
  //but does that break the rule of changing display2()?
  display1(a, b, c, d, aPtr);
  display2(a, b, c, d, *aPtr);
  
  cout << endl;
  cout << "Printing int b: " << b << endl;
  cout << "Printing int a: " << a << endl;
  display3(b, aPtr);
  cout << endl;
  cout << "Printing int b: " << b << endl;
  cout << "Printing int a: " << a << endl;
  //observation b did not change since it was local, a did change because 
  //the passing aPtr which is a reference to a as well, a changes. all the way from p





  cout << endl;
  cout << "\"aPtr\" is a pointer, whose value is " << aPtr << endl;
  cout << "This is the same as \"&a\", or " << &a << endl;
    
  cout << endl;
  cout << "\"aPtr\" points to the following value:  " << *aPtr << endl;
  cout << "This is the same as \"a\", or " << a <<endl;
  

  int newPtr = 23;
  //assign new value that aPtr points to;
  *aPtr = newPtr;

  cout << *aPtr << endl;
  cout << a << endl;
  //the values are the same (23 and 23)
  


}
