#include<iostream>
using namespace std;
void printsubarray_util(int arr[],int s, int e,int n){
      //base case 
      if (e>=n){
            return;
      }
      //ak case solve
     for(int i=s;i<e;i++){
      cout<<arr[i]<<" ";
     }
     cout<<endl;
      printsubarray_util(arr,s,e+1,n);
}
void printsubarray(int arr[],int n){
      for(int start=0;start<n;start++){
      int end =start;
      printsubarray_util(arr,start,end,n);

      }

}
int main(){
      int arr[]={1,2,3,4,5};
      int n=5;
    
      printsubarray(arr,n);



return 0;

}