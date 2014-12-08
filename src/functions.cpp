#include <iostream>

/**
 * function demoFunction
 * prints out a useful message
 */
void demoFunction()
{
  std::cout << "In demoFunction\n";
}

/**
 */
int Add (int a, int b)
{
  std::cout << "In Add(), received: " << a << " and " << b << std::endl;
  return a+b;
}

/**
 * function main - prints out a message, then
 * calls demoFunction, then prints out a
 * second message.
 */
int main()
{
  std::cout << "In main\n";
  int a,b,c = 0;
  std::cout << "Enter two numbers: ";
  std::cin >> a;
  std::cin >> b;
  std::cout << std::endl << "Calling Add()" << std::endl;
  c = Add(a,b);
  std::cout << std::endl << "Back in main()" << std::endl;
  std::cout << "c was set to: " << c << std::endl;
  std::cout << "Exiting..." << std::endl;
  return 0;
}
