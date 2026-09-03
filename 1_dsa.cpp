#include <iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    int k=arr[0];
    for(int i=0;i<n;i++){
        if(i<n-1){
            arr[i]=arr[i+1];

        }
        if(i==n-1){
            arr[i]=k;
        }
        

    }
    for(int j=0;j<5;j++){
        cout<<arr[j]<<" ";
    }
}
