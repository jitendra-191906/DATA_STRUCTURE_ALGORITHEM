//calculate sum of 1 to n even number :-
#include <iostream>
using namespace std;
int main()
{
    int n, num = 2;
    unsigned sum = 0;
    cout << "enter value of number for even num calculate sum" << endl;
    cin >> n;

    while (num <= n)
    {

        sum = sum + num;
        num = num + 2;
    }
    cout << "the sum of 1 to " << n << " even no. is :" << sum << endl;
}