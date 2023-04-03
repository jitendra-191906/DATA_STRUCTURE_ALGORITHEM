#include <iostream>
using namespace std;
//same function but kam alag alag...

void print(int n){
      if(n<0)return;
      print(n--);
      cout<< n <<" ";
}

int main()
{
      print(3);
      return 0;
}