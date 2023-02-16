#include<bits/stdc++.h>
using namespace std;


int decimalToBinaryMethod2(int num){
    //Bitwise & Method :
   int binaryNum=0;
   int i=0;
    while(num>0)
      {
           int bit = num & 1;
        binaryNum=bit*pow(10 , i++)+binaryNum;
          num = num>>1;
      }
return binaryNum;
}

int main()
{
    int n;cin>>n;
    cout<<decimalToBinaryMethod2(n);

return 0;
}