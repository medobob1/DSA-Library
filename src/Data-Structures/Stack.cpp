#include <vector>

class Stack
{
private:
    unsigned int size = 0;
    std::vector<int>arr;

public:
    void push(int data)
    {
        arr.insert(arr.begin(), data);
        size++;
    }
    void pop()
    {
        if (size == 1 || size == 0)
        {
            arr.clear();
            size = 0;
            return;
        }
        arr.erase(arr.begin());
        size--;
    }

    void clear()
    {
        arr.clear();
    }

    int peek()
    {
        if (isEmpty())
        {
            throw std::runtime_error("Stack is empty");
        }
        
        return arr[0];
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return arr.empty();
    }

    std::vector<int> getStack()
    {
        return arr;
    }
};