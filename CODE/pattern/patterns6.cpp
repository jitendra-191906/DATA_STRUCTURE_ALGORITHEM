#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no. of row in patterns";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char ch = 'A' +row - 1;
        while (col <= n)
        {
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}
