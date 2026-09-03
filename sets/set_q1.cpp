#include <bits/stdc++.h>
using namespace std;
int main(){
    //finding target value which is sum of 2 no in array . 
    unordered_set<int>myset;
    int n;
    cout<<"size of array ";
    cin>>n;
    int arr[n];
    cout<<"enter array element ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target value ";
    cin>>target;
    for(int i=0;i<n;i++){
        if(myset.count(target-arr[i])){
            cout<<arr[i]<<" "<<target-arr[i]<<endl;
        }
        else{
            myset.insert(arr[i]);
        }
    }
}
