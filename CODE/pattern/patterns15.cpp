#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter no of row in patterns";
    cin>>n;
    int row =1;
    while(n<=row){
        int col =1;
        int star = n-row + 1;
        while(star){
            cout<<star<<" ";
            star--;
        }
        cout<<endl;
        row++;

    }
}