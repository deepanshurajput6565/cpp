#include <iostream>
using namespace std;
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
int main(){
    int item;
    int a[100];
    for(int i=0;i<100;i++){
        a[i]=i;
    }
    cin>>item;
    int found=binarysearch(a,0,99,item);
    if(found==-1){
        cout<<"item not found";
    }
    else{
        cout<<"item found at location "<<found;
    }
}