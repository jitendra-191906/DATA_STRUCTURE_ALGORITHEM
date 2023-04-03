#include<iostream>
using namespace std;
void lastoccurence(string &s,int i,char x,int &ans){
      //base case
     if(i>=s.size()){
      return ;
     }

     if(s[i]==x){
      ans =i;
      return;
      
     }
     lastoccurence(s,i-1,x,ans);
}


int main(){
      string s;
      cin>>s;
      char x;
      cin>>x;
      int ans =-1;
      int i=s.size()-1;
      lastoccurence(s,i,x,ans);
      cout<<ans<<endl;
}