#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no. of row in patterns";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        //sapace 
        int space = n-row;
        while(space){
            cout<<" ";
            space--;
        }

        int col = 1;
        while (col <= row)
        {
           cout<<"*";
    
           col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}