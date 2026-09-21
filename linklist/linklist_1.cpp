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
node* create_node(int value){
    node* n1= new node(value); //used for object creation
    return n1;

}
int main(){
    int value;
    cin>>value;
    node* newnode1=create_node(value);
    cout<<"node created"<<endl;
    cout<<newnode1->data;
}