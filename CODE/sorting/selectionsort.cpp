#include<iostream>
#include<vector>
using namespace std;
int main(){


// int arr[]={23,4,35,12,1};
// int n = sizeof(arr)/sizeof(int);
vector<int>arr {24,34,56,23,45,6};
int n = arr.size();
for(int i=0;i<n-1;i++){
      int miniindex =i;
      for(int j =i+1;j<n;j++){
            if(arr[j]<arr[miniindex]){
                  miniindex=j;
            }
      }
//swap
swap(arr[i],arr[miniindex]);
}
for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
}


      return 0;
}