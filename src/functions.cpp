#include <iostream>

void myFunc();

int main()
{
  using std::cout;
  using std::cin;
  using std::endl;

  int x = 8;
  cout << "In main x: " << x << endl;
  myFunc();
  x = 5;
  cout << "Back in main x: " << x << endl;

  return 0;
}

void myFunc()
{
  using std::cout;
  using std::cin;
  using std::endl;

  int x = 20;
  cout << endl << "In myFunc local x: " << x << endl;
  {
    int x = 42;
    cout << "In block in myFunc very local x: " << x << endl;
  }
  cout << "Back in myFunc local x: " << x << endl;
}
