#include <iostream>

int main()
{
  enum Days
  {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
  };

  Days today;
  today = Tuesday;

  if(today == Sunday || today == Saturday)
  {
    std::cout << std::endl << "Gotta' love the weekends!" << std::endl;
  }
  else
    std::cout << std::endl << "Back to work!" << std::endl;

  return 0;
}
