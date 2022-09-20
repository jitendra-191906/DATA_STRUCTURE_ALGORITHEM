#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 2;

    cout << "and bitwise operator(&)" << endl;
    cout << (a & b) << endl;
    cout << "OR bitwise operator(|)" << endl;
    cout << (a | b) << endl;
    cout << "NOT bitwise operator(~)" << endl;
    cout << (~a) << endl;

    cout << "XOR bitwise operator(^)" << endl;
    cout << (a ^ b) << endl;

    // right shift operator
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;

    // left shift operator
    cout << (19 << 1) << endl;
    cout << (19 << 2) << endl;
}
