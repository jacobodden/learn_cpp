#include <iostream>

class SimpleCat {
  public:
    SimpleCat();
    ~SimpleCat();
    int get_age() const { return *age; }
    void set_age(int age) { *this->age = age; }
    int get_weight() const { return *weight; }
    void set_weight(int weight) { *this->weight = weight; }
  private:
    int* age;
    int* weight;
};

SimpleCat::SimpleCat()
{
  age = new int(2);
  weight = new int(20);
}

SimpleCat::~SimpleCat()
{
  delete age;
  delete weight;
}

int main()
{
  using namespace std;

  SimpleCat* Frits = new SimpleCat;
  cout << "Frits is " << Frits->get_age() << " years old" << endl;
  Frits->set_age(5);
  cout << "Frits is " << Frits->get_age() << " years old" << endl;
  delete Frits;

  return 0;
}
