#include <iostream>
using namespace std;
int main()
{
      int arr[] = {1, 3, 2, 2, 5};
      int n = sizeof(arr) / sizeof(int);
      // without modifiy the array
      while (arr[0] != arr[arr[0]])
      {
       swap(arr[0], arr[arr[0]]);
      }
       int ans = arr[0];
      cout << "duplicate element is " << ans << endl;

      // negative marking method
      //  int ans =-1;
      //  for(int i=0;i<n;i++){
      //        int index = abs(arr[i]);

      //       //already visited
      //       if(arr[index]<0){
      //             ans =index;
      //             break;
      //       }
      //       //marking visited
      //       arr[index] *= -1;

      // }
      // cout<<"duplicate elemnt is "<<ans<<endl;
      return 0;

}