#include <bits/stdc++.h>
using namespace std;
bool fun(pair<int ,int>p1,pair<int ,int>p2){
    if (p1.second != p2.second){
        return (p1.second>p2.second);
    }
    return (p1.second<p2.second);
}
int main(){
    int n,x;
    cin>>n;
    unordered_map<int,int>map1;
    for(int i=0;i<n;i++){
        cin>>x;
        map1[x] += 1;
        
    }
    vector< pair< int, int > > vec(map1.begin(),map1.end());
    sort(vec.begin(), vec.end(), fun);
    for(auto x: vec){
        cout<<x.first;
    }
}