#include <iostream>
using namespace std;
int main()
{
    int n;
    int num = 2;
    cout << "enter a number" << endl;
    cin >> n ;
while(num<n){

    if(n%num==0){
        cout <<"not a prime number";
       
    }
     num = num +1;

}


    cout<<"the prime number";


}