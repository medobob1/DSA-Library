#include <iostream>
#include "Data-Structures/Stack.cpp"
#include "Data-Structures/Queue.cpp"

using namespace std;

int main()
{
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.pop();
    vector<int> myStack = s1.getStack();
    cout << "the top is " << s1.peek() << endl;
    cout << "The stack elements: ";
    for (int i : myStack)
    {
        cout << i << " ";
    }

    cout << endl;

    Queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.dequeue();

    vector<int> myQueue = q1.getQueue();
    cout << "the front is " << q1.front() << endl;
    cout << "The queue elements: ";
    for (int i : myQueue)
    {
        cout << i << " ";
    }
}