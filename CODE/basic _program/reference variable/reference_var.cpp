#include <iostream>
using namespace std;

void update(int n){
    n++;
}
//created reference variable
//pass by reference
void update2(int &n){
    n++;
}
int main()

{
    
int n =5;
cout<<"before "<<n<<endl;
update2(n);
cout<<"after "<<n<<endl;

return 0;
}