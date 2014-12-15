#include <iostream>

int main()
{
  using namespace std;
  int lv = 5;
  int* pl = &lv;
  int* h = new int;
  *h = 7;
  cout << "lv: " << lv << endl;
  cout << "&lv: " << &lv << endl;
  cout << "*pl: " << *pl << endl;
  cout << "&pl: " << &pl << endl;
  cout << "*h: " << *h << endl;
  cout << "&h: " << &h << endl;
  delete h;
  h = new int;
  *h = 9;
  cout << "*h: " << *h << endl;
  cout << "&h: " << &h << endl;
  delete h;
  return 0;
}
