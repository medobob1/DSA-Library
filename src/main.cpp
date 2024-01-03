#include <iostream>
#include "Data-Structures/Stack.cpp"

using namespace std;

int main()
{
    Stack s1;
    s1.pop();
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    vector<int> myStack = s1.getStack();
    cout << "the top is " << s1.peek() << endl;
    cout << "The stack elements: ";
    for (int i : myStack)
    {
        cout << i << " ";
    }
}