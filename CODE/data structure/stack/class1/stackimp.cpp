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
    // function
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

    int getsize()
    {
        /// no of valide emement in stack
        return top + 1;
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else{
            return false;
        }
    }
    int gettop()
    {
        if (top == -1)
        {
                        cout << "stack is empty" << endl;
                        return -1;

        }
        else
        {
                      return arr[top];

        }
    }
};
int main()
{
    stack st(4);
    st.push(11);
    st.push(12);
    st.push(12);
    st.push(10);
    // while (!st.isempty())
    // {
    //     cout << st.gettop() << " ";
    //     st.pop(); 
    // }
    cout<<endl;
    cout<<st.gettop()<<endl;
    cout<<st.isempty()<<endl;
    cout<<st.getsize()<<endl;

}
