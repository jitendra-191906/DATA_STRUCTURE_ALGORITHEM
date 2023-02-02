#include<iostream>
#include<stack>
using namespace std;
#include<stack>
int main(){
stack<int>s;
s.push(4);
s.push(23);
s.push(12);
s.pop();
s.pop();
s.pop();
s.push(1);

cout<<"top element"<<endl<<s.top()<<endl;
if(s.empty()
){
    cout<<"stack is empty"<<endl;
}
else{
    cout<<"stack is not empty"<<endl;
}
cout<<"size of stack is "<<s.size();
}