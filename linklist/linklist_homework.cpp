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
    cout<<"display link list before insertion insertion\n";
    temp=head;
    while(temp !=nullptr){
        cout<<temp->data<<"-"<<temp->next<<" -> ";
        temp=temp->next;
    }
    cout<<"null"<<endl;
    int item,search;
    temp=head;
    
    cout<<"\nenter item want to insert : ";
    cin>>item;
    node* newnode1= new node(item);
    cout<<endl<<"after which value you want to insert : ";
    cin>>search;
    while(true){
        if(search==temp->data){
            newnode1->next=temp->next;
            temp->next=newnode1;
            break;   
        }
        temp=temp->next;
    }
    while(temp==NULL){
        cout<<"\nvalue not found where to insert";
        delete newnode1;
    }
    cout<<endl<<"display link list after insertion insertion\n";
    temp=head;
    while(temp !=nullptr){
        cout<<temp->data<<"->"<<temp->next<<" ";
        temp=temp->next;
    }
    cout<<"null";   
    
}
