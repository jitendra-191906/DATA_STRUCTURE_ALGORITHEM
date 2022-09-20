#include <iostream>
using namespace std;

int main()
{
   
    int i = 0;
    while (i <5)
    {
        int j = 1;
        while (j <= 6)
        {
            cout << " ";
            if (j ==3)
            {
                cout << "jitendra";
                j++;
            }
            else
            {
                cout << j;
                j++;
            }
        }
        cout << endl;
        i++;
    }
}