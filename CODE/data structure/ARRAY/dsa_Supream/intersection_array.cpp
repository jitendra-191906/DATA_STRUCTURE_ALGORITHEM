#include <iostream>
#include <vector>
using namespace std;
int main()
{
      int arr[] = {1, 2, 3, 3, 5, 6};
      int sizea = 6;
      int brr[] = {3, 3, 6, 10, 11, 12};
      int sizeb = 6;

      vector<int> ans;
      for (int i = 0; i < sizea; i++)
      {

            for (int j = 0; j < sizeb; j++)
            {
                  if (arr[i] == brr[j])
                  {
                        // mark
                        ans.push_back(brr[j]);
                        brr[j] = -1;
                  }
            }
      }
      for (auto value : ans)
      {
            cout << value << endl;
      }
      cout << endl;

      return 0;
}