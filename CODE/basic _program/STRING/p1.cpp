#include <iostream>
using namespace std;
int getlegth(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
     count++;

    }
cout<<"THE LENGTH IS:-"<<count;
return 0;
}
int main(){
    char name[20];
    int count=0;
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"your name is "<<name<<endl;
   getlegth(name);
}
   