#include <iostream>
using namespace std;
class node{
    public :
        int data;
        node* next;
    node(int value){
        data=value;
        next=nullptr;

    }
    
};

int main(){
    int n,value;
    node* head=nullptr;
    node* temp=nullptr;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        node* newnode=new node(value);
        if(head==nullptr){
            head=newnode;
            temp=head;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    cout<<"display link list";
    temp=head;
    while(temp !=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"null";

    
    
}