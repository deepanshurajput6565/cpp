#include <iostream>
using namespace std;
#include <vector>
int main(){
    // int n=10;
    // int arr[n]={1,2,3,12,3,45,21,4,64,7};
    int pos;
    cout<<"enter index of element want to delete ";
    cin>>pos;
    // for(int i=pos; i<n-1;i++){
    //     arr[i]=arr[i+1];

    // }
    // n--;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    vector<int>a;
    int x;
    for(int i=0;i<5;i++){
        cin>>x;
        a.push_back(x);
    }
    a.erase(a.begin()+pos);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    


}