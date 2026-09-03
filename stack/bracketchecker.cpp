#include <bits/stdc++.h>
using namespace std;
bool invalid(string str){
    stack<char>st;
    for(auto ch:str){
        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
        }
        else if(ch==')' || ch=='}' || ch==']' ){
            if(st.empty()){
                return false;
            }
            else if((ch==')'&& st.top()=='(')||(ch=='}'&& st.top()=='{')||(ch==']'&& st.top()=='[') ){
                st.pop();
            }

        }
    }
    return st.empty();
    
}
int main(){
    string s="int ={([()])}";
    cout<<invalid(s);
}