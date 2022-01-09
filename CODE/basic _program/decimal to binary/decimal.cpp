#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "enter a binary number...want to convert decimal ";

    int n;
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = pow(2, i) + ans;
        }
        n = n / 10;
        i++;
    }
    cout << "the decimal number  is " << ans << endl;
}