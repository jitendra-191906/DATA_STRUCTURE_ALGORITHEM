#include<iostream>
using namespace std;
bool checkpali(string &s,int start,int end){
      //base case
      if (start>=end){
            return true;

      }
      //ak case
      if(s[start]!=s[end]){
            return false;
      }
return checkpali(s,start+1,end-1);

}
int main(){
      string s;
      cin>>s;
      int start =0;
      int end =s.size()-1;
  
   bool answer=checkpali(s,start,end);
   if(answer){
      cout<<"palidrome"<<endl;
   }
   else{
      cout<<"not palidroem";
   }
    return 0;
     
}