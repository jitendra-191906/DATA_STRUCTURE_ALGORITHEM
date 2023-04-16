#include <iostream>
using namespace std;
// same function but kam alag alag...

class a
{
public:
      int dob;
      void operator+(a &a2)
      {
            int value1 = this->dob;
            int value2 = a2.dob;
            cout << (value1 - value2) << endl;
      }
};

int main()
{
      a a1, a2;
      a1.dob = 23;
      a2.dob = 45;
      a1 + a2;
}