#include<iostream>
using namespace std;
class Animal{
public:
//state and properties
int age;
int name;

//method and behaviour
void eat(){
cout<<"eating"<<endl;
}
void sleep(){
      cout<<"sleeping"<<endl;
}
void print(){
      this->age=age;
      this->name =name;
      cout<<"age is"<<this->age<<endl;
      cout<<"name is "<<this-name<<endl;
}

};
int main(){

cout<<"size of empty class "<< sizeof(Animal) <<endl;
//b\onject create
Animal hero;
hero.eat();
hero.age=12;
hero.name ='jitu';
cout<<hero.age<<endl;



return 0;
}