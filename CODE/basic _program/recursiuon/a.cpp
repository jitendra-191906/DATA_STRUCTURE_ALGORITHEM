#include<iostream>
#include<string>
using namespace std;

void satdigit(int n,string arr[]){
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
    cout <<"enter a number";
   cin>>n;
    string arr[10]={ "zero","one","two","three","four","five","six","seven","eight","nine"};
 satdigit(n, arr) ;
} 