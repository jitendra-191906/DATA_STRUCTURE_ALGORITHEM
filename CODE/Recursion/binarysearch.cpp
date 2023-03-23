#include<iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int key){
      if(s>e){
            return -1;
      }
      int mid =(s+e)/2;
      //1 case solve kr diya 
      if(key==arr[mid]){
            return  mid;
      }
//baki recursion sabal lega
      if(key>arr[mid]){
            s =mid +1;
           int ans= binarysearch(arr, s, e,key);
           return ans;
      }
     else{
            e =mid-1;
           int ans =binarysearch(arr, s, e,key);
           return ans;
}


}
int main(){
      int arr[]={23,45,88,67,89,36};
      int n=sizeof(arr)/sizeof(int);
      int s=0;
      int e=n-1;
      int key =23;
      int ans =binarysearch(arr,s,e,key);
      cout<<"Element found at index : "<<ans<<endl;
      return 0;
}