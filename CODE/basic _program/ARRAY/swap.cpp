#include <iostream>
using namespace std;

void swapalternate(int ARR[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(ARR[i], ARR[i + 1]);
        }
    }
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
    cout<<"without swap"<<endl;
        PrintArray(arr, size);

    swapalternate(arr, size);
        cout<<"alternate swap"<<endl;

    PrintArray(arr, size);
    return 0;
}
