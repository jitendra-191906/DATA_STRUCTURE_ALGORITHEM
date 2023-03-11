#include <iostream>
#include <vector>
#include<array>
using namespace std;

int main()
{
    
      int one, two, zero;
      one = two = zero = 0;
     int arr[]={1,0,2,1,1,2,0,2,1,2,0};
     int n = (sizeof(arr)/sizeof(int)) ;
     //counting method

for (int i = 0; i < n; i++)
      {
            if (arr[i] == 0)
            {
                  zero++;
            }
            else if (arr[i] == 1)
            {
                  one++;
            }
            else
            {
                  two++;
            }
      }
      int i = 0;
      while (zero--)
      {
            arr[i] = 0;
            i++;
      }

      while (one--)
      {
            arr[i] = 1;
            i++;
      }
      while (two--)
      {
            arr[i] = 2;
            i++;
      }
      for (int j = 0; j< n; j++)
      {
            cout << "elment is" << arr[j] << endl;
      }
      return 0;
}