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


#include<bits/stdc++.h>
using namespace std;


int binaryToDecimal2(int num){

   int decimalNum=0;
   int i=0;
   int digit;
    while(num>0)
      {
             digit=num%10;
        decimalNum+=digit<<i;
        num=num/10;
        i++;
      }
return decimalNum;
}

int main()
{
      cout<<"enter the binary number that you want to convert into to decimal"<<endl;
    int n;
    cin>>n;
    cout<<binaryToDecimal2(n);

return 0;
}

  