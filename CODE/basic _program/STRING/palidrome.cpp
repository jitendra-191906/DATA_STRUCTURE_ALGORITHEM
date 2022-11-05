#include <iostream>
#include <string>
using namespace std;
bool check_palidrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;
    if (a[s] != a[e])
    {
        return 0;
    }
    else
    {
        s++;
        e--;
    }
return 1;
}
int getlegth(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[100];
    char rever[100];
    cout << "enter your name" << endl;
    cin >> name;
    cout << "your name is " << name << endl;
    int leng = getlegth(name);
    cout << "if return 1 then string is palidrome and return 0 then string is not palidrome" << endl
         << check_palidrome(name, leng);
}
for (auto i = 1; i < str.size(); ++i)
    if (str[i - 1] == str[i]) 
	  return removeDuplicates(str.substr(0, i - 1) + str.substr(i + 1));
  return str;