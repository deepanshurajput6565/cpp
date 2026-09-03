#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
int main(){
//     string s;
//     getline(cin,s);
//     // reverse(s.begin(),s.end());
    
//     sort(s.begin(),s.end());
//     // cout<<s<<endl;

// //2 string input these 2 strings are annergan or not

//     string s1;
//     getline(cin,s);
//     sort(s1.begin(),s1.end());
//     if (s1.size()==s.size()){
//         if(s1==s){
//             cout<<"strings are annergan"<<endl;
//         }
//         else{
//             cout<<"strings are not annergan"<<endl;
//         }
//     }
//     else{
//         cout<<"strings are not annergan"<<endl;
//     }

// // to find out wether a given string is palindrome or not using reverse function
//     string s2;
//     string s3;
//     getline(cin,s2);
//     for(char ch: s2){
//         ch = tolower(ch);
//     }
//     s3=s2;
//     reverse(s2.begin(),s2.end());
//     if(s2==s3){
//         cout<<"strings are palindrome"<<endl;
//     }
//     else{
//         cout<<"strings are not palindrome"<<endl;
//     }
    

// given string s1="my class name is at floor" s2="hi" replace first and last a of s1 by s2;
    // string s4;
    // string s5;
    // getline(cin,s4);
    // getline(cin,s5);
    
    // for(int i=0;i<s4.size();i++){
    //     s4[i]==tolower(s4[i]);
    //     if(s4[i]=='a'){
    //         s4.erase(i,1);
    //         s4.insert(i,s5);
    //     }
    // }
    // cout<<s4;
    string s4;
    string s5;
    getline(cin,s4);
    getline(cin,s5);
    
    for(int i=0;i<s4.size();i += 2){
        
        s4.erase(i,1);
        
    }
    
    for(int i=0;i<s4.size();i += 2){
        
        s4.insert(i,s5);
        
    }
    cout<<s4;
    




}