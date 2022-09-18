#include <iostream>
#include <math.h>
using namespace std;
int power(int x, int y)
{
    int ans = 1;
    for (int i = 1; i <= y; i++)
    {
        ans = ans * x;
    }
    return ans;
}
int main()
{
    int a, b;
    cout << "enter input digit and its power" << endl;
    cin >> a >> b;

    int answer = power(a, b);
    cout << a << " power of " << b << " is :- " << answer << endl;

    int c, d;
    cin>>c>>d;
    int newans = power(c,d);
   cout << c << " power of " << d << " is :- " << newans<< endl;

}