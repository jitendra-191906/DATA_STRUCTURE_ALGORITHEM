#include <iostream>
#include <vector>
using namespace std;
int fibrecursive(int n)
{
      // base case
      if (n == 0 || n == 1)
      {
            return n;
      }
      int ans = fibrecursive(n - 1) + fibrecursive(n - 2);
      return ans;
}
int topDown(int n, vector<int> &dp)
{
      // base case
      if (n == 0 || n == 1)
      {
            return n;
      }
      if (dp[n] != -1)
      {
            return dp[n];
      }
      dp[n] = topDown(n - 1, dp) + topDown(n - 2, dp);
      return dp[n];
}
int bottomup(int n)
{
      vector<int> dp(n + 1, -1);
      dp[0] = 0;
      if (n == 0)
      {
            return dp[0];
      }
      dp[1] = 1;
      for (int i = 0; i <= n; i++)
      {
            dp[i] = dp[i - 1] + dp[i - 2];
      }
      return dp[n];
}
int main()
{
      int n;
      cout << "enter the n value" << endl;
      cin >> n;
      // int ans = fibrecursive(n);
      // cout<<ans;
      // vector<int>dp(n+1,-1);
      // int ans = topDown(n,dp);
      // cout<<ans<<endl;
      int ans = bottomup(n);
      cout << ans << endl;

      return 0;
}