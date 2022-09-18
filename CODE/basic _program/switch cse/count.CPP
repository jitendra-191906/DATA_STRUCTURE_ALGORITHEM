#include <iostream>
#include <math.h>
using namespace std;

int main()
{

       int a;
       cout << "enter amount" << endl;
       cin >> a;

       switch (a)
       {
              if (a >= 100)
              case true:
              {
                     int notes100 = a / 100;
                     a = a - notes100 * 100;
                     cout << "no of 100 rs in amount is" << notes100;
              }
              if (a >= 50)
                     case 2:
                     {
                            int notes50 = a / 50;
                            a = a - notes50 * 50;
                            cout << "no of 50 rs in amount is" << notes50;
                     }
                            if (a >= 10)
                            case 3:
                            {
                                   int notes10 = a / 10;
                                   a = a - notes10 * 10;
                                   cout << "no of 100 rs in amount is" << notes10;
                            }
                                   if (a >= 1)
                                   case 4:
                                   {
                                          int notes1 = a / 1;
                                          a = a - notes1 * 1;
                                          cout << "no of 100 rs in amount is" << notes1;
                                   }
       }
}