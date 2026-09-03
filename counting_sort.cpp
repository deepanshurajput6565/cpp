#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    


    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int max=arr[0];

    for(int i=0;i<n;i++){
        if(max<arr[i]);
        max=arr[i];
    }
    cout<<endl<<max;
    int a[max+1]={0};
    for(int i=0;i<n;i++){
        a[arr[i]]++;
    }
    cout<<endl;
    for(int i=0;i<=max;i++){
        cout<<a[i]<<" ";
    }
    for(int i=1;i<=max;i++){
        a[i]=a[i]+a[i-1];
    }
    int b[n];
    for(int i=n-1;i>=0;i--){
        b[--a[arr[i]]]=arr[i];

    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    

}