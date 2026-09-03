#include <iostream>
using namespace std;
int binarysearch(int a[],int,int,int);
int main(){
    int a[100],end=99,beg=0,mid,item;
    
    for(int i=0;i<100;i++){
        a[i]=i;
    }
    mid=(end+beg)/2;
    for(int i=0;i<100;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<" enter item ";
    cin>>item;
    while(true){ 
        if (a[mid]==item){
            cout<<endl<<"item fount at location "<<mid+1;
            break;
        }
        else{
            if(a[mid]<item){
                beg=mid+1;
                mid=(beg+end)/2;
            }
            else if(beg==end){
                cout<<endl<<"item not found";
                break;
            }
            else{
                end=mid-1;
                mid=(beg+end)/2;

            }
            


            

        }

        
    }
    // int x=binarysearch(a,beg,end,item);
    // if (x==-1){
    //     cout<<"item not found";
    // }
    // else{
    //     cout<<"item found at location "<<x;
    // }
//wrp a program for a binary search using recursion
}

int binarysearch(int a[],int beg,int end,int item){
    if(beg>end){
        return -1;
    }
    int mid=(beg+end)/2;
    if(a[mid]==item){
        return mid+1;
    }
    else if(a[mid]<item){
        return binarysearch(a,mid+1,end,item);
    }
    else{
        return binarysearch(a,beg,mid-1,item);
    }

}

