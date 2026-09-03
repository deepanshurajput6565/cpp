#include <bits/stdc++.h>
using namespace std;
int main(){
    // int n,x;
    // cin>>n;
    // map<int,int>map1;
    // for(int i=0;i<n;i++){
    //     cin>>x;
    //     map1[x]=x*x;
        
    // }
    // for(auto pir :map1){
    //     cout<<pir.first<<" "<<pir.second<<endl;
    // }
    // unordered_set<int> myset1;
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    //     myset1.insert(arr[i]);

    // }
    // int uni=myset1.size();
    // int repeat= n-uni;
    // cout<<"sum of unique and reapeated element product "<<uni*repeat;
    int n,x;
    cin>>n;
    map<int,int>map1;
    for(int i=0;i<n;i++){
        cin>>x;
        map1[x] += 1;
        
    }
    int unique=0,non_unique=0;
    for(auto pir :map1){
        if(pir.second==1){
            unique++;
        }
        else{
            non_unique++;
        }
        
    }
    cout<<"sum of unique and reapeated element product "<<unique*non_unique;



}