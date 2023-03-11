#include<iostream>
#include<vector>
using namespace std;

int getlength(char arr[]){
      int legth =0;
      int i=0;
      while(arr[i]!='\0'){
            legth++;
      }
      return legth;
}
int main(){
 
char ch[100];
cin>>ch;
int length=getlength(ch);
cout<<"lenght is"<<length;


return 0;
}




//Why we are using different -different method to initialise the vector as a parameter in function. What is the logic behind this.