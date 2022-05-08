#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // go to right hand side

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    int mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{

    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 6);

    cout << " Index of " << evenIndex << " is " << even[evenIndex] << endl;

    int oddIndex = binarySearch(odd, 5, 1);

    cout << " Index of " << oddIndex << " is " << odd[oddIndex] << endl;

    return 0;
}
