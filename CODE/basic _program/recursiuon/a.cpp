#include<iostream>
#include<string>
using namespace std;
string satdigit(int n,string arr){
 // base case
 if(n==0){
    return ;
 }
//  processing
int  digit =n%10;
n =n/10;
// RR
satdigit(n,arr);
cout<<arr[digit]<<endl;
}
int main(){
    int n;
    cin>>n;
    string arr[10]={"one","two","three","fo ur","five","six","seven","eight","nine"};
 satdigit(n, arr) ;
}