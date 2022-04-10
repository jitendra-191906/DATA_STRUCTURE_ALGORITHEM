#include <iostream>
using namespace std;

int rearr(int ARR[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(ARR[start], ARR[end]);
        start++;
        end--;
    }
    return 0;
}
int PrintArray(int Arr[], int size)
{
    for (int i = 0; i < size; i++)
    {

        cout << Arr[i] << "  ";
    }
    return 0;
}
int main()
{
    cout << "enter size of array";
    int size;
    cin >> size;
    int arr[100] = {0};
    for (int i = 0; i < size; i++)
    {
        cout << "enter element of an array A[" << i << "]" << endl;
        cin >> arr[i];
    }
    cout << "before reverse an array is" << endl;
    PrintArray(arr, size);
    rearr(arr, size);
    cout << endl;
    cout << "after reverse an array is" << endl;

    PrintArray(arr, size);
    return 0;
}
