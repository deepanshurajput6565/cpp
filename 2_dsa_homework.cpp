#include <iostream>
using namespace std;
int main(){
    int n=6;
    int arr[n]={1,2,4,5,6,6};
    bool a=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j+1]+arr[j];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
                a=false;

            }
        }
    }
    if(a){
        cout<<"already sorted";
    }
    else{
        cout<<"not sorted";
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // int big=arr[n-1];
    // int small=arr[0];
    // int sc_small,sc_big;
    // int c1=0,c2=0;
    // for(int i=0;i<n;i++){
    //     if(small<arr[i]){
    //         sc_small=arr[i];
    //         c1 += 1;
    //         break;
    //     }
    // }
    // for(int i=n-1;i>=0;i--){
    //     if(big>arr[i]){
    //         sc_big=arr[i];
    //         c2 += 1;
    //         break;
    //     }
    // }
    // if(c1==0){
    //     cout<<"second smallest not exist"<<-1<<endl;
    // }
    // else if(c1 != 0){
    //     cout<<"second smallest"<<sc_small<<endl;
    // }
    // if(c2==0){
    //     cout<<"second largest not exist"<<-1<<endl;

    // }
    // else if(c2 != 0){
    //     cout<<"second largest "<<sc_big<<endl;

    // }
    int arr[5]={1,2,3,4,6};
    int small=__INT_MAX__;
    int small_2=__INT_MAX__;
    for(int i=0;i<5;i++){
        if(small>arr[i]){
            small_2=small;
            small=arr[i];
        }


    }
    cout<<small<<" "<<small_2;


}