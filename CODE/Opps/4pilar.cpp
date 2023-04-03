#include <iostream>
using namespace std;
class Animal
{
public:
      // state and properties
      int age;
      int weigth;

      // method and behaviour

      // void eat()
      // {
      //       cout << "eating" << endl;
      // }
      // int getage()
      // {
      //       return this->age;
      // }
      // void setage(int age)
      // {
      //       this->age = age;
      // }
};
//inheritance of two class
 class dog:public Animal{
public:
      void print()
      {
            cout << this->age << endl;
      }

 };
int main()
{
      dog d1;
      // d1.age;
    d1.print();
      return 0;
}