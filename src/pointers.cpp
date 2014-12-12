#include <iostream>

typedef unsigned short int USHORT;

int main()
{
  using namespace std;

  USHORT myAge;
  USHORT* pAge = 0;

  myAge = 5;

  cout << "myAge: " << myAge << endl;
  pAge = &myAge; // assig address of myAge to pAge
  cout << "*pAge: " << *pAge << endl << endl;

  cout << "Setting *pAge = 7 ..." << endl;
  *pAge = 7; // sets myAge to 7

  cout << "*pAge: " << *pAge << endl;
  cout << "myAge: " << myAge << endl << endl;

  cout << "Setting myAge = 9 ..." << endl;
  myAge = 9; // sets myAge to 9

  cout << "myAge: " << myAge << endl;
  cout << "*pAge: " << *pAge << endl << endl;

  return 0;
}
