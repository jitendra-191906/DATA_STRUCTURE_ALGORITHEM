#include<iostream>
using namespace std;
void moveallnegativenumberleftside(int *arr,int n){
      int l=0;
      int h =n-1;
      while(l<h){
            if(arr[l]<0){
                  l++;
            }
            else if(arr[h]>0){
                  h--;
            }
            else{
                  swap(arr[l],arr[h]);

            }
      }
}
//order is not matter
int main(){
      int arr[]={1,-2,4,-6,-8,-23,5,0,8,6};
      int n = sizeof(arr)/sizeof(int);
      moveallnegativenumberleftside(arr,n);
      for(int i=0; i<n;i++){
            cout<<arr[i]<<" ";
      }
}