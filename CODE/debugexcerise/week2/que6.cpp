#include<iostream>

using namespace std;
//binary to decimal
// int binaryToDecimal(int b){
//     int ans;
//     int c=0;
//     while(b){
//         ans=(b % 10) * (1 << c++);
//         b/=10;
//     }
//     return ans;
// }

//errorfree code



int binaryToDecimal(int b){
    int ans;
    int c=0;
    while(b){
        ans=(b % 10) * (1 << c++);
        b/=10;
    }
    return ans;
} 
int main(){
    int n;
    cin>>n;
    binaryToDecimal(n);
}
  
