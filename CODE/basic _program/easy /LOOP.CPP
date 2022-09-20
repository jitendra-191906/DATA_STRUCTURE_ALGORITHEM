//calculate sum of 1 to n even number :-
#include <iostream>
using namespace std;
int main()
{
    int n, num = 1;
  int sum = 0;
    cout << "enter value of number for calculate sum" << endl;
    cin >> n;

    while (num <= n)
    {

        sum = sum + num;
        num = num + 1;
    }
    cout << "the sum of 1 to " << n << " is :" << sum << endl;
}