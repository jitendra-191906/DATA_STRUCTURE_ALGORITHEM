#include<iostream>
#include<vector>
using namespace std;
bool solve(vector<int> &arr,int &n,int i){
      //base case
      if(i==n-1){
            return true;
      }
      if(arr[i]>=arr[i+1]){
      return false;
      
      }
     bool ans = solve(arr,n,i+1);
     return ans;
}
int main(){
     vector<int> arr{1,2,3,4,5,6,7};
      int n =sizeof(arr)/sizeof(int);
      cout<<n<<endl;
      int i=0;
      bool ans =solve(arr,n,i);
      if(ans){
            cout<<"array is sorted"<<endl;
      }
      else{
            cout<<"array is not sorted"<<endl;
      }
      return 0;
}