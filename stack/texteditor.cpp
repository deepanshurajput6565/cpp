#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    string data;
    node *next;
    node(string st){
        data=st;
        next=NULL;

    }
};
class Stack{
    public:
    node *top;
    Stack(){
        top=NULL;
    }

    void push(string st){
        node *n1=new node(st);
        n1->next=top;
        top=n1;
    }
    void pop(){
        if(top==NULL){
            cout<<"Empty ";
            return;
        }
        string st=top->data;
        node* temp=top;
        top=top->next;
        cout<<st<<" succesfully UNDO\n";
        delete temp;

    }
    void peek(){
        if(top==NULL){
            cout<<"EMPTY";
        }
        cout<<top->data<<endl;
    }
    void display(){
        node *temp=top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    Stack s;
    s.push("hello");
    s.push("world");
    s.push("i ");
    s.push("am ");
    s.push("evil");
    s.pop();
    s.peek();

}