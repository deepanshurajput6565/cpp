
#include <bits/stdc++.h>
using namespace std;
class Stack{
    int arr[100];
    int top;
    int size;
    public:
    Stack(int n){
        top=-1;
        size=n;

    }
    void push(int val){
        if(top==size){
            cout<<"stack overflow ";
            return;
        }
        else{
            arr[++top]=val;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"stack underflow";
            return;
        }
        else{
            cout<<arr[top--];
            cout<<" this element succesfully deleted\n";
        }
    }
    void display(){
        int x=top;
        while(x !=-1){
            cout<<arr[x--]<<" ";
        }
    }


};
int main(){
    int n=10;
    Stack st(n);
    st.push(10);
    st.push(20);
    st.pop();
    st.push(30);
    st.push(50);
    st.display();

}