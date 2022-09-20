#include <iostream>
#include <string>
using namespace std;
int getlegth(char name[])
{
     int count = 0;
     for (int i = 0; name[i] != '\0'; i++)
     {
          count++;
     }
     return count;
}
char reverse_string(char name[], int n)
{
     int s = 0;
     int e = n - 1;
     while (s < e)
     {
          swap(name[s++], name[e--]);
     }
}
int main()
{
     char name[100];
     cout << "enter your name" << endl;
     cin >> name;
     cout << "your name is " << name << endl;

     int leng = getlegth(name);
     reverse_string(name, leng);
     cout << "after reverse the string is :" << endl;
     cout << name;
}