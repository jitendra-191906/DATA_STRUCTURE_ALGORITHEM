#include <iostream>

using namespace std;

int fun(int = 0, int = 0);

int main()
{

      cout << fun(5);

      return 0;
}
int fun(int x, int y)
{
      return (x + y);
}
// The provided code defines a function fun that takes two integer parameters with default values of 0 if no arguments are passed to the function.
// The function returns the sum of its two parameters.In the main function, fun is called with a single argument of 5. 
//Since the function definition specifies default values for both parameters, the first argument will be assigned to the x parameter, and the second argument will take the default value of 0 and be assigned to the y parameter. Thus, the function call fun(5) is equivalent to fun(5, 0), which returns 5