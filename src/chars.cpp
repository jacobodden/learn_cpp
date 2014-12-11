#include <iostream>

int main()
{
  for (int i = 32; i < 128; i++)
  {
    std::cout << (char) i << " ";
  }

  std::cout << "\n\n";

  for (unsigned char i = 32; i < 128; i++)
  {
    std::cout << i << " ";
  }
  return 0;
}
