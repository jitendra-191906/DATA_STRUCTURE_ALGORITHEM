#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reversefirstkelement(queue<int> &q, int k)
{
      int n = q.size();

      if (k <= 0 || k > n)
      {
            return;
      }
      stack<int> s;
      int i = 0;
      while (i < k)
      {
            int temp = q.front();
            q.pop();
            s.push(temp);
            i++;
            if (i < k)
            {
                  break;
            }
      }
      while (i < k)
      {
            int temp = s.top();
            s.pop();
            q.push(temp);
      }
      i = 0;
      while (!q.empty() && n - k != 0)
      {
            int temp = q.front();
            q.pop();
            q.push(temp);
            i++;
            if (i == n - k)
            {
                  break;
            }
      }
}

int main()
{
      queue<int> q;
      q.push(10);
      q.push(20);
      q.push(30);
      q.push(40);
      q.push(50);
      reversefirstkelement(q, 3);
      while (!q.empty())
      {
            cout << q.front() << " ";
            q.pop();
      }
      cout << endl;

      return 0;
}