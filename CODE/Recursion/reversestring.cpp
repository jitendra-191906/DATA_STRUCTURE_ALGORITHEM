#include<iostream>
using namespace std;
void reversestring(string &s, int start,int end){
       //base case
       if(start>end){
            return;
       }
//one case solve
swap(s[start],s[end]);

reversestring(s,start+1,end-1);

}
int main(){
      string s;
      cin>>s;
      int start =0;
      int end =s.size()-1;
      reversestring(s,start,end);
      cout<<s<<" "<<endl;
}