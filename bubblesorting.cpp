#include <iostream>
using namespace std;
int main(){
    int n,t;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;

            }
        }
    }
    cout<<endl<<"sorted list"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}