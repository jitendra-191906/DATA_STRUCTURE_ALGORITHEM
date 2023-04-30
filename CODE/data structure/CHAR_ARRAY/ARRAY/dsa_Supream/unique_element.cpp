#include <iostream>
#include <vector>
using namespace std;
int findunique(vector<int> arr)
{
      int ans = 0;
      for (int i = 0; i < arr.size(); i++)
      {
            ans = ans ^ arr[i];
      }
      return ans;
}
int main()
{
      // unique element
      int n;
      cout << "enter the no. of element" << endl;
      cin >> n;

      vector<int> arr(n);
      for (int i = 0; i < arr.size(); i++)
      {
            cin >> arr[i];
      }
      int unique = findunique(arr);
      cout << "unique elemt " << unique << endl;

      return 0;
}