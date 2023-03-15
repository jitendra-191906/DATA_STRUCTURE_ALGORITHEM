#include<iostream>
using namespace std;
void findmax(int arr[],int n,int i,int& mini){
      //base case
      if(i>=n){
            return;
      }
      if(arr[i]<mini){
            mini =arr[i];
      }
//recursive relation
findmax(arr,n,i+1,mini);
      
}
int main(){
     int arr[]={23,56,78,34,56,23,7};
     int n=7;
     int i=0;
     int mini = INT_MAX;
     findmax(arr,n,i,mini);
     cout<<"the minimum element is "<<mini<<endl;
     return 0;
}