#include<iostream>
#include<queue>
#include<stack>
using namespace std;
// void reversequeue1(queue <int>&q){
//       if(q.empty()){
//             return;
//       }
//       int temp =q.front();
//       q.pop();
//       reversequeue1(q);
//       q.push(temp);
// }
void reversequeue2(queue <int>&q){
     stack<int>s;
     while(!q.empty()){
      int temp =q.front();
      q.pop();
      s.push(temp);
     }
     while(!s.empty()){
      int temp=s.top();
      s.pop();
      q.push(temp);
     }
}

int main(){
      queue <int>q;
      q.push(10);     
      q.push(20);
      q.push(30);
      q.push(40);
      q.push(50);
      //method1
      // reversequeue1(q);
      // cout<<q.front()<<endl;
      // while (!q.empty())
      // {
      //       cout<<q.front()<<" ";
      //       q.pop();
      // }
      // cout<<endl;
     // method2

      reversequeue2(q);
      cout<<q.front()<<endl;
      while (!q.empty())
      {
            cout<<q.front()<<" ";
            q.pop();
      }
      cout<<endl;
      


      return 0;
}