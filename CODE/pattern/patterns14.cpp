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
// 1 st tringal
        int col = 1;
        while (col <= row)
        {
           cout<<col<<"";
    
           col = col + 1;
        }
        // tringal 
        int start =row -1;
        while(start){
            cout<<start;
            start--;
        }
        cout << endl;
        row = row + 1;
    }
}