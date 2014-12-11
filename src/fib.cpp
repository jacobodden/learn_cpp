#include <iostream>

int fib(int);

int main()
{
  using std::cout;
  using std::cin;
  using std::endl;

  int n, answer;
  cout << "Enter a number to find: ";
  cin >> n;

  cout << endl << endl;
  answer = fib(n);

  cout << answer << " is the " << n << "th Fibonacci number." << endl;

  return 0;
}

int fib(int x)
{
  using std::cout;
  using std::cin;
  using std::endl;

  cout << "Processing fib(" << x << ")... ";

  if(x < 3)
  {
    cout << "Return 1" << endl;
    return 1;
  }
  else
  {
    cout << "Call fib(" << x-2 << ") and fib(" << x-1 <<")" << endl;
    return (fib(x-2) + fib(x-1));
  }
}
