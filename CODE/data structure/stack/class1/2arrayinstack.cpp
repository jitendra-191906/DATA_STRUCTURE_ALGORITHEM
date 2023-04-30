#include <iostream>
using namespace std;
#include <stack>
class Stack
{
public:
      int top1;
      int top2;
      int *arr;
      int size;
      Stack()
      {
            this->top1 = -1;
            this->top2 = size;
            arr = new int[size];
            this->size = size;
      }
      void push1(int data)
      {
            if (top2 - top1 == 1)
            {
                  cout << "overflow in s1" << endl;
            }
            else
            {
                  top1++;
                  arr[top1] = data;
            }
      }
      void push2(int data){
            if(top2-top1==1){
                  cout<<"overflow in s2"<<endl;
            }
            else{
                  top2--;
                  arr[top2]=data;
            }


      }
      void pop1()

      {
            if(top1==-1){
                  cout<<"stack underflow in  s1"<<endl;
            }
            else{
                  top1--;
            }
      }
      void pop2()

      {
            if(top2==size){
                  cout<<"stack underflow in  s2"<<endl;
            }
            else{
                  top2++;
            }
      }
};
int main()
{
      Stack s(7);
      s.push1(20);
      s.push1(30);
      s.push1(40);
      s.push1(50);

      s.push1(100);
      s.push1(110);
      s.push1(120);
     



}