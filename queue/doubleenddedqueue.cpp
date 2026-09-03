#include <iostream>
using namespace std;

class dqueue
{
    int arr[10];
    int front;
    int rear;
    int size;

public:
    dqueue(int n)
    {
        size = n;
        front = -1;
        rear = -1;
    }

    bool isfull()
    {
        if (rear == size - 1 )
            return 1;
        return 0;
    }

    bool isempty()
    {
        if (front == -1)
            return 1;
        return 0;
    }

    void enqueue(int x)
    {
        if (isfull() == 1)
        {
            return;
        }

        if (front == -1)
            front = 0;
        
        rear += 1;
        arr[rear] = x;
    }

    int dequeue()
    {
        if (isempty() == 1)
        {
            return -1;
        }
        int x = arr[front];

        front--;

        if (front==size-1)
        {
            front = -1;
            rear = -1;
        }

        return x;
    }

    int insertfront(int x){
        if (isfull() == 1)
        {
            return;
        }
        else if(front = -1){
            rear=0;
            front=0;
        }
        else if (front == 0){
            front=size-1;
        }
        else
            --front;
        dqueue(front)=x;
    }

};

int main()
{
    int n;
    cin >> n;

    dqueue q(n);

}