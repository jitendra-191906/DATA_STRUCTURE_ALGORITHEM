#include<iostream>
#include<math.h>
using namespace std;
int nCr(int n, int r){
    int factrioal( int x){
    if(x==1&&x==0){
        return 1;
    }
    else{
        return (x*factrioal(x-1));
    }
}
    int ncr = factrioal(n)/factrioal(r)*factrioal(n-r);
    return ncr ;
}

int main(){
    int n , r;
    cout<<"enter the n value in nCr";
    cin>>n;
    cout<<"enter the r value in nCr";
    cin>>r;
    int answer = nCr(n,r);
    cout<<"the answer is "<<answer;
}