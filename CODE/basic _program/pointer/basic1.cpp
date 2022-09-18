#include <iostream>
using namespace std;
int main(){
    int p=6;
    int *ptr =&p;
    cout<<*ptr<<"\n";
    cout<<ptr<<"\n";
    (*ptr)++;
    cout<<*ptr<<"\n";
    (ptr++);
    cout<<ptr<<"\n";
    ptr =ptr+1;
    cout<<ptr;
}