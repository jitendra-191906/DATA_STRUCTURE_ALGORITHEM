#include<iostream>
#include<stack>
using namespace std;
int main(){
   
    stack<char> s;
    string str;
    cout<<"enter the string"<<endl;
    cin>>str;
    cout<<"input string:- "<<str<<endl;
    for(int i=0;i<str.length();i++){
    char ch = str[i];
    s.push(ch);
}
string ans = " ";
while(!s.empty()){
    char ch = s.top();
    ans.push_back(ch);
    s.pop();
}
cout<<"the reverse string is "<<ans;
}