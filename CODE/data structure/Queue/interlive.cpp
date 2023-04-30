#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void interleavequeqe(queue<int> &q)
{
      int n = q.size();
      queue<int> q2;
      int k = n / 2;
      int count = 0;
      while (!q.empty())
      {
            int temp = q.front();
            q.pop();
            q2.push(temp);
            count++;
            if (count == k)
            {
                  break;
            }
      }
      // star interleaveing
      while (!q.empty() && !q2.empty())
      {
            int first = q2.front();
            q2.pop();
            q.push(first);

            int second = q.front();
            q.pop();
            q.push(second);
      }

      while (n & 1)
      {
            int temp = q.front();
            q.pop();
            q.push(temp);
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
      q.push(60);
      q.push(70);
      q.push(80);
      q.push(90);
      interleavequeqe(q);
      while (!q.empty())
      {
            cout << q.front() << " ";
            q.pop();
      }
      cout << endl;

      return 0;
}