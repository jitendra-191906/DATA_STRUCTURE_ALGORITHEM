#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    cout << "the array element array is :- { ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << "}" << endl;
}
void input_array(int arr[], int x)
{
    for (int i = 0; i < x; i++)
    {
        cout << "enter the  " << i << "th  element:";
        cin >> arr[i];
    }
}
int main()
{
    int arr[] = {};
    int size;
    cout << "enter a size of array ";
    cin >> size;

    input_array(arr, size);
    printarray(arr, size);
    int min, max = arr[0];
    int i;
    for (i = 1; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
           
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    
}
cout << "the minimum element is:" << min << endl;
cout << "the maximum element is:" << max << endl;
}