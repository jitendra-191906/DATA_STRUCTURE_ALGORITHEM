#include <iostream>
using namespace std;
#include <stack>
void printmiddleelment(stack<int>s,int totalsize){
      if(s.size()==totalsize/2 +1){
            cout<<"the middle emelemt is "<<s.top()<<endl;

      }

      int temp = s.top();
      s.pop();
      printmiddleelment(s,totalsize);
      s.push(temp);
}

int main()
{
    stack<int>s;
      s.push(20);
      s.push(30);
      s.push(40);
      s.push(50);

     
      s.push(110);
 
      int totalsize =s.size();
      printmiddleelment(s,totalsize);
     



}