#include<iostream>
using namespace std;
bool is_sorted(int arr[],int n){

if(n==0||n==1){
    return true;
}
    if(arr[0]>arr[1])
{
    return false;
}
  else{
    bool resu =is_sorted(arr+1,n-1);
    return resu;

  }
}
int main (){
int array [5]={4,6,8,87,74};
int size =5;
bool result = is_sorted(array,size);
if(result){
    cout<<"array is sorted";

}
else{
    cout<<"araay is not sorted";
}
return 0;
}
