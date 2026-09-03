#include <bits/stdc++.h>
using namespace std;
class Queue{
    int front;
    int rear;
    int arr[100];
    int size;
    public:
    Queue(int n){
        size=n;
        front=-1;
        rear=-1;
    }
    bool isfull(){
        if(rear==size-1){
            return true;
        }
        else{
            return false;
        }

    }
    bool isempty(){
        if(front==-1){
            return true;
        }
        else{
            return false;
        }
    }
    void enque(int x){
        if(isfull()){
            cout<<"queue is full already "<<endl;
            return;
        }
        else if(isempty()){
            front=rear=0;
            arr[rear]=x;
            cout<<x<<" is updated "<<endl;
            return;

        }
        rear=rear+1;
        arr[rear]=x;
        cout<<x<<" is updated "<<endl;


        
    }
    void deque(){
        if(isempty()){
            cout<<"underflow "<<endl;
            return;
        }
        int val=arr[front];
        if(front == rear){
            front=rear=-1;
            cout<<val<<" successfully deleted"<<endl;
            return;

            
        }

        front=front+1;
        cout<<val<<" successfully deleted"<<endl;

    }
    void display(){
        if(isempty()){
            cout<<"undeflow";
            return;
        }
        else{
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
        }
    }

};
int main(){
    int n=5;
    Queue q(n);
    q.enque(10);
    q.deque();
    q.enque(50);
    q.enque(20);
    q.deque();
    q.enque(10);
    q.enque(70);
    q.enque(60);
    q.display();
   



}