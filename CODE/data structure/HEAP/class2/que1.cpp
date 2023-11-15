#include<iostream>
#include<queue>
using namespace std;
int kthelement(int arr[],int n, int k){

   priority_queue<int>q;
  for(int i=0;i<k;i++){
      q.push(arr[i]);

  }
  //other ke liye check krte ha
  for(int i=k;i<n;i++){
      int ele=arr[i];
      if(ele<arr[k]){
            q.pop();
            q.push(arr[k]);
      }
  }
  return q.top();
}

int main(){
   int arr[]={10,20,5,4,50};
   int size =5;
   int k=2;
   int ans =kthelement(arr,size,k);
   cout<<"k th largest element"<<ans<<endl;

      return 0;
}