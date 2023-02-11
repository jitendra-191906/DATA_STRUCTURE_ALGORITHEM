#include<iostream>
#include<vector>
using namespace std;
int main(){
      //pair sum
      int arr[] ={10,20,30,40,60,70};
      int n=6;
      int ans =50;

      for(int i =0;i<6;i++){
            int ele =arr[i];

            for(int j=i+1;j<6;j++){
                  cout<<"("<<ele<<","<<arr[j]<<")"<<endl;
            }
            for(int j=i+1;j<6;j++){

            if(ele+arr[j]==ans){
                  cout<<"hello";
                  cout<<ele<<","<<arr[j]<<endl;
            }
            }
      }


      return 0;
}