#include <iostream>
using namespace std;
int main()
{
      int arr[2][2] = {{1, 3}, {2, 4}};
      for (int i = 0; i < 2; i++)
      {
            // printing row wise
            int sum = 0;

            for (int j = 0; j < 2; j++)
            {
                  sum = sum + arr[i][j];
            }
            cout << sum << " ";

            cout << endl;
      }

      cout << "column wise sum" << endl;
      for (int i = 0; i < 2; i++)
      {
            // printing row wise
            int sum = 0;

            for (int j = 0; j < 2; j++)
            {
                  sum = sum + arr[j][i];
            }
            cout << sum << " ";

            cout << endl;
      }
      return 0;
}