#include <iostream>
using namespace std;
class Fruit
{
public:
       int weigth;
};
//inheritance of two class
 class Mango:public Fruit{
public:
      int age;

 };
 class alphonso:public Mango{
      public:
      int sugerlevel;
 };
int main()
{
      alphonso a;
      cout<<a.weigth<<" "<<a.age<<" "<<a.sugerlevel<<endl;
     
}