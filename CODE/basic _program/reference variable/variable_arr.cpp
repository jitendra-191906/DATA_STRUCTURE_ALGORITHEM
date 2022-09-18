#include <iostream>

using namespace std;
int  getsum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;



    
}
int main()
{
    cout<<"enter number of element in array ";

    int n;
    cin >> n;
    // variable array in  dynamic memory allocation
    int *arr = new int[n];
    cout<<"enter element";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    int ans = getsum(arr, n);
    cout << "the answer is " << ans;
}
