
#include <iostream>
using namespace std;

int main()
{
      if (~0 == 1)
      {
            cout << "yes\n";
      }
      else
      {
            cout << "no\n";
      }
}
// This C++ program tests if the bitwise NOT operator applied to zero results in one. The bitwise NOT operator (~) in C++ is a unary operator that performs a bitwise negation of its operand. When applied to an integer, it flips all of the bits in its binary representation. For example, the bitwise NOT of the integer 5 (represented in binary as 101) is -6 (represented in binary as 11111010).
//In the program, the expression ~0 is equivalent to taking the bitwise NOT of zero. Since zero is represented in binary as a sequence of all zeros, taking the bitwise NOT of zero results in a sequence of all ones. Therefore, the expression ~0 evaluates to -1 in C++.
// The conditional statement checks if ~0 is equal to 1. Since ~0 is actually equal to -1, the condition evaluates to false and the program outputs "no" to the console.