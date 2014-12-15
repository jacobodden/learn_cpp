#include <iostream>

int main()
{
  using std::cout;
  using std::endl;

  unsigned short int sn;
  sn = 65535;
  cout << "sn: " << sn << endl;
  sn++;
  cout << "sn: " << sn << endl;
  sn++;
  cout << "sn: " << sn << endl;

  return 0;
}
