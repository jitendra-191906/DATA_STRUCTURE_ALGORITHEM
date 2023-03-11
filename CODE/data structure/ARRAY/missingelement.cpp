#include <iostream>
using namespace std;
void FindMissingEle(int arr[], int n)
{
      //methos 2
      //sorting and swapping method
      for (int i=0;i<n;i++){
            int index =arr[i]-1;
            if(arr[i]!=arr[index]){
                  swap(arr[i],arr[index]);
            }
            else{
                  i++;
            }
            }
            cout<<endl<<"missing element is ";
            for(int i =0;i<n;i++){
                  if(arr[i]!=i+1){
                        cout<<i+1<<" ";
                  }
            }
     //visited eleement method
      // for (int i = 0; i < n; i++)
      // {
      //       int index = abs(arr[i]);
      //       if (arr[index - 1] > 0)
      //       {
      //             arr[index-1] *= -1;
      //       }
      // }

      // for (int i = 0; i < n; i++)
      // {
      //       cout << arr[i] << " ";
      // }
      // cout<<endl<<"missing element is ";
      // for(int i=0;i<n;i++){
      //       if(arr[i]>0){
      //             cout<<i+1<<" ";
      //       }
      // }
}
int main()
{
      int n;

      int arr[] = {1, 3, 5, 3, 4};
      n = sizeof(arr) / sizeof(int);
      FindMissingEle(arr, n);
}