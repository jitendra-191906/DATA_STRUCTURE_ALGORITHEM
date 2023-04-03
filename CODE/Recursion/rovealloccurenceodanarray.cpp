#include <iostream>
using namespace std;
void alloccurence(string &s, string &part)
{
      int position = s.find(part);

      if (position != string ::npos)
      {
            string left = s.substr(0, position);
            string right = s.substr(position + part.size(), s.size());
            s = left + right;
            alloccurence(s, part);
      }
      else
      {
            return;
      }
}
int main()
{

      string s;
      cin >> s;
      string part;
      cin >> part;
      alloccurence(s, part);
      cout << s << endl;
      return 0;
}