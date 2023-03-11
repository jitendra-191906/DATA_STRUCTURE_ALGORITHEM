#include<iostream>
#include<algorithm>
using namespace std;

//custom campreator

bool cmp(char first,char second){
      return first > second;
}
int main(){
string s="abcdefg";
sort(s.begin(),s.end(),cmp);
cout<<s<<endl;
return 0;
}
