#include <vector>
#include <stdexcept>

class Queue 
{
private:
    unsigned int size = 0;
    std::vector<int> arr;

public:
    void enqueue(int data)
    {
        arr.push_back(data);
        size++;
    }

    void dequeue()
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

    int front()
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

    std::vector<int> getQueue()
    {
        return arr;
    }
};