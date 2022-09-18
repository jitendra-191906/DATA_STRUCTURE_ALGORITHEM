// find unique no.in array
#include <iostream>
using namespace std;

int main()
{
  int arr[] = {};
  int size;
  cout << "enter a size of array ";
  cin >> size;

  for (int i = 0; i < size; i++)
  {
    cout<<"enter the  "<<i<<"th  element:-";
    cin >> arr[i];
  }
  cout << "the array element array is :- { ";
  for (int i = 0; i < size; i++)
  {
    cout << " " << arr[i];
  }
  cout<<"}"<<endl;

  int ans = 0;
  for (int i = 0; i < size; i++)
  {
    ans = ans ^ arr[i];
  }
  cout << "the unique element in array is " << ans;
  return 0;
}
