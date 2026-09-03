#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    cout<<endl;
    int arr[size];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int item;
    cout<<endl<<"enter item want to find"<<endl;
    cin>>item;
    int loc=-1,k=0;
    while(loc==-1 && k<size){
        if(arr[k]==item){
            loc=k;
        }
        k +=1;

    }
    cout<<loc;


    
}