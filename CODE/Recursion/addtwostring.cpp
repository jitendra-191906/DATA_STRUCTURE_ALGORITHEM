#include<iostream>
using namespace std;
void addstring(string s1, string s2,string &output,int len1,int len2,int i){
      int len3 =len1+len2 -2;
      //base case 
      if(i>len3){
            return;
      }

      while(i>len1){
            output[i]=s1[i];
           }
           while(i>len2){
            output[i]=s2[i];
           }
           
            
           
           addstring(s1,s2,output,len1,len2,i+1);
 

}
int main(){

string s1;
cin>>s1;
string s2;
cin>>s2;
cout<<s1<<endl;
string output ="";
int len1 =s1.size();
int len2 =s2.size();
int i=0;
addstring(s1,s2,output,len1,len2,i);
cout<<output<<endl;








      return 0;
}