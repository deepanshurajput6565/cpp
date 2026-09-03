#include <iostream>
using namespace std;
int main(){
    int n,key;
    cin>>n;
    cout<<"enter key ";
    cin>> key;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];

    }
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n-i-1;j++){
            if((a[i]+a[j] )==key){
                cout<<" combination of element at index of ";
                cout<<i<<" "<<j<<"";
                c++;

            }
        }
    }
    if(c==0){
        cout<<"no combination exist";
    }

}