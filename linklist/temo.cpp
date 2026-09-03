#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
int main (){
    int n, value;
    cin>>n;
    Node*head = NULL;
    Node*temp = NULL;
    for(int i=0; i<n; i++){
        cin>>value;
        Node*strt = new Node(value);
        if(head == NULL){
            head = strt;
            temp = head;
        }
        else{
            temp -> next = strt;
            temp = strt;
        }
    }
    Node*insert = new Node(23);
    insert->next=head;
    head=insert;
    


    cout<<"Display";
    temp = head;
    while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<"NULL";
    return 0;

}