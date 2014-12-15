#include <iostream>

int main()
{
  using std::cout;
  using std::endl;
  using std::cin;

  int x,y,z;
  cout << "Enter two numbers." << endl;
  cout << "First: ";
  cin >> x;
  cout << "Second: ";
  cin >> y;
  cout << endl;

  if(x > y)
    z = x;
  else
    z = y;

  cout << "After if test, Z: " << z << endl;

  z = (x > y) ? x : y;

  cout << "After conditional test, Z: " << z << endl;

  return 0;
}
