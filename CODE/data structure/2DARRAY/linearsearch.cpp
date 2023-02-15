#include <iostream>
using namespace std;
int main()
{
      int arr[2][2] = {{1, 3}, {2, 4}};
      int key =5;
      for (int i = 0; i < 2; i++)
      {

            for (int j = 0; j < 2; j++)
            {
                  if(key==arr[i][j]){
                        cout<<"key is found at"<<i<<","<<j<<endl;
                  }
                 
            }

            cout << endl;
      }

   
      return 0;
}