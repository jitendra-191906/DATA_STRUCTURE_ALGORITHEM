#include <iostream>
using namespace std;
// errorfull code
//  Print solid square pattern.
// void main()
// {
//       int n;
//       cin >> n;
//       for (int i = 0; i < n; ++i)
//       {
//             for (int j = 0; j < n; ++i)
//             {
//                   cout << "*\n";
//             }
//             cout << endl;
//       }
// }
// answer ->
int main()
{
      int n;
      cin >> n;
      for (int i = 0; i < n; ++i)
      {
            for (int j = 0; j < n; ++j)
            {
                  cout << " * ";
            }
            cout << endl;
      }
}