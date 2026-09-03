#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val){
        data=val;
        next=NULL;

    }
};
class Stack{
    public:
    node *top;
    Stack(){
        top=NULL;
    }

    void push(int val){
        node *n1=new node(val);
        n1->next=top;
        top=n1;
    }
    void pop(){
        if(top==NULL){
            cout<<"under flow ";
            return;
        }
        int val=top->data;
        node* temp=top;
        top=top->next;
        cout<<val<<" succesfully deleted\n";
        delete temp;

    }
    void display(){
        node *temp=top;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    Stack st;
    st.push(20);
    st.push(30);
    st.push(40);
    st.pop();
    st.push(60);
    st.display();

}