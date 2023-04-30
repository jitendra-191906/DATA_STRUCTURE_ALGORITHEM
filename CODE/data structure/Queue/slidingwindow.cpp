#include <iostream>
#include <deque>
#include <stack>
using namespace std;
void solve(int arr[], int k)
{

      deque<int> q;
      for (int i = 0; i < k; i++)
      {
            if (arr[i] < 0)
            {
                  q.push_back(i);
            }
      }
}

int main()
{
      int arr[] = {12, -1, -7, 8, -15, 30, 16, 20};
      int size = 8;
      int k = 3;
      solve(arr, k);

      return 0;
}