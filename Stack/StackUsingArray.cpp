#include <climits>
#include <iostream>
class StackUsingArray
{
    int *data;
    int nextIndex;
    int capacity;

public:
    StackUsingArray()
    {
        data = new int[4];
        nextIndex = 0;
        capacity = 4;
    }
    int size()
    {
        return nextIndex;
    }
    bool isEmpty()
    {
        /*if(nextIndex==0){
            return true;
        }
        else{
            return false;
        }
        */
        return nextIndex == 0;
    }

    void push(int element)
    {
        if (nextIndex == capacity)
        {
            int *neData = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                neData[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = neData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top()
    {
        if (isEmpty())
        {
            cout << "Stack Empty" << endl;
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }
};