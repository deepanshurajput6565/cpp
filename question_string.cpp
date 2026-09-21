#include <bits/stdc++.h>
#include <vector>
#include <stack>
using namespace std;
int main(){
    // int freq=1;
    // string s;
    // cin>>s;
    // for(int i=1;i<s.size();i++){
    //     if(s[i]==s[i-1]){
    //         freq++;
    //     }
    //     else{
    //         freq=1;
    //     }
    //     if(freq==1){
    //         cout<<i-1;
    //         break;
    //     }
    // }
    // string s;
    // cin>>s;
    // unordered_map<char,int>mymap;
    // for(char ch: s){
    //     mymap[ch]++;
        
    // }
    // int index=0;
    // for(char x : s){
    //     if(mymap[x]==1){
    //         cout<<x<<" "<<index;
            
            
    //         break;
    //     }
    //     index++;
    // }
    // if (index==s.size()){
    //     cout<<-1;
    // }
    vector<int>nums;
    int n=5;
    // cin>>n;
    stack<int>st;
    int arr[n]={1,3,2,6,4\};
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    for(int i=n-1;i>=0;i--){
        st.push(arr[i]);

    }
    for(int i=0;i<n;i++){
        
        while(!st.empty()){
            
            if(st.top()<=arr[i]){
                st.pop();
                
            }
            else{
                nums.push_back(st.top());
                break;
            }
        }
        if(st.empty()){
            nums.push_back(-1);
        }
    }
    
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<nums[i]<<endl;
    }




}