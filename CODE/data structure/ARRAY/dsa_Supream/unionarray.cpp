#include <iostream>
#include <vector>
using namespace std;
int main()
{
      // uion array
      int arr[] = {1, 2, 3, 4, 5, 6};
      int sizea = 6;
      int brr[] = {7, 8, 9, 10, 11, 12};
      int sizeb = 6;
      vector<int> ans;

      for (int i = 0; i < sizea; i++)
      {
            ans.push_back(arr[i]);
      }
      for (int i = 0; i < sizeb; i++)
      {
            ans.push_back(brr[i]);
      }
      for (int i = 0; i < ans.size(); i++)
      {
            cout << ans[i] << " ";
      }
      return 0;
}