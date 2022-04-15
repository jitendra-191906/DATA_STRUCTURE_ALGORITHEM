// find quique no.in array
#include <iostream>
using namespace std;

int main()
{
    int arr[20] = {1, 2, 2, 1, 5, 64, 64};
    int size = 8;
    int ans = 0;
    for (int i = 0; i < 8; i++)
    {

        ans = ans ^ arr[i];
    }
    cout << "the unique elemwnt in array is " << ans;
    return 0;
}
