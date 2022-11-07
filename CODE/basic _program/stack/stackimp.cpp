#include <iostream>
using namespace std;

class stack
{
public:
    int *arr;
    int top;
    int size;
    // constructor
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int ele)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = ele;
        }
        else
        {
            cout << "stack is overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack is underflow" << endl;
        }
    }
    void isempty()
    {
        if (top == -1)
        {
            cout << "stack is empty";
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
};
int main()
{
    stack st(4);
    st.push(11);
    st.push(12);
    st.push(12);

    cout << st.peek();
    st.pop();
    st.pop();
    cout << st.peek();
}
