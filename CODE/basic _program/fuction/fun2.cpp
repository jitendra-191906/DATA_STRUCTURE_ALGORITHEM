#include <math.h>
#include<iostream>
using namespace std;
//return 0 if no. is odd
//return 1 if no.is even
bool iseven(int x){
    if(x&1){
        return 0;
    }
    return 1;
}
int main()
{
    int a;
    cout<<"enter a number";
    cin>>a;
    if(iseven(a)==0){
        cout<<"number is odd";
    }
    else{
        cout<<"number is even";
    }
}