#include<iostream>
using namespace std;
void findmax(int arr[],int n,int i,int& maxi){
      //base case
      if(i>=n){
            return;
      }
      if(arr[i]>maxi){
            maxi =arr[i];
      }
//recursive relation
findmax(arr,n,i+1,maxi);
      
}
int main(){
     int arr[]={23,56,78,34,56,23,7};
     int n=7;
     int i=0;
     int maxi = INT_MIN;
     findmax(arr,n,i,maxi);
     cout<<"the maximum element is "<<maxi<<endl;
     return 0;
}