#include <iostream>
using namespace std;
int main()
{
    // int p=6;
    // int *ptr =&p;
    // cout<<*ptr<<"\n";
    // cout<<ptr<<"\n";
    // (*ptr)++;
    // cout<<*ptr<<"\n";
    // (ptr++);
    // cout<<ptr<<"\n";
    // ptr =ptr+1;
    // cout<<ptr;
    for (int row = 0; row < 3; row = row + 1)
    {
        for (int col = 0; col < 5; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
}