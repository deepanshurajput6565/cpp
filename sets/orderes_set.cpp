#include <bits/stdc++.h>
using namespace std;
int main(){
    // set<int> myset1;
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    //     myset1.insert(arr[i]);

    // }
    // for(int x : myset1){
    //     cout<<x<<"";
    // }
    // cout<<myset1.size();
    vector<int>nums={1,2,3,4,5,6,2,4,1,3};
    unordered_set<int>myset;
    int t=6;
    int c=0;
    
    for(int i=0;i<nums.size();i++){
        if(myset.find(t-nums[i]) != myset.end()){
            c+=1;

        }
        myset.insert(nums[i]);
    }
    cout<<c;



    
}