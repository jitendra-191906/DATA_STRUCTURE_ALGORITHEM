#include<iostream>
#include<math.h>
using namespace std;

int main( ){
    int a ,b;
    char oper;
    cout<<"enter a value of a ";
    cin>>a;
    cout<<"enter a value of b ";
    cin>>b;
    cout<<"enter operation ";
    cin>>oper;
    //basic calculator operation
    switch (oper)
    {
    case '+': cout<<"addition of a and b is "<<a+b;
        break;
    case '-': cout<<"substraction of a and b is "<<a-b;
        break;
    case '*': cout<<"maltification of a and b is "<<a*b;
        break;
    case '/': cout<<"divide of a and b is "<<a/b;//give only int value
        break;
    default :cout<<"not vaild operation.....please try again"  ;  
    
    }
}