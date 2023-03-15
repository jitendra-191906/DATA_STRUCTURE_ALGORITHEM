#include<iostream>
using namespace std;

void printarray(int arr[],int n,int i){
      //base case
      if(i>=n){
            return;
      }
      cout<<arr[i]<<" ";
      printarray(arr,n,i+1);
}
int main(){
      int arr[]={45,55,66,77,88};
      int n=5;
      int i=0;
      printarray(arr,n,i);
      return 0;
}