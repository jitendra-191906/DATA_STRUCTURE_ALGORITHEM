#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no of row in patterns";
    cin >> n;
    int row = 1;
    while (n <= row)
    {

        int space = n - row + 1;
        while (space)
        {
            cout << "*";
            space--;
        }
        cout << endl;
        row++;
    }
}