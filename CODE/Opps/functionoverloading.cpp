#include <iostream>
using namespace std;
//same function but kam alag alag...
class Functionoverload
{
public:
      int sum(int a, int b)
      {
            return a + b;
      }
      int sum(int a, int b, int c)
      {
            return a + b + c;
      }
      int sum(int a, double b)
      {
            return a + b;
      }
      int sum(int a, float b)
      {
            return a + b;
      }
};

int main()
{
      Functionoverload a;
      cout << a.sum(7, 5) << endl;
      cout << a.sum(7, 5, 6) << endl;
      cout << a.sum(7, 5.12f) << endl;
      cout << a.sum(7, 5.12) << endl;

      return 0;
}