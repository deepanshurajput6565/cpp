#include <bits/stdc++.h>
using namespace std;
#include <string>
#include <cctype>
void con(string s1,string s2){
    if(s1.length()==s2.length()){
        cout<<s1+s2;
    }
    else if(s1.length()>s2.length()){
        for(char ch:s1){
            cout<<ch<<" ";
        }


    }
    else{
        cout<<s2.length();
    }

}

int main(){
    // string s ={"hello"};
    // string s1 {"hello"};
    // string s2={s1}; //accessing s1 in s2
    // cout<<s<<endl<<s1<<endl<<s2<<endl;
    // string s3={s1,0,3};
    // cout<<s3<<endl;
    // string s4 (5,'b');
    // cout<<s4<<endl;
    // string s5={"class",3};//string declare as constant
    // cout<<s5;
    string s={"zello"};
    // getline(cin,s);  //syntax of get line
    // cout<<s<<endl;
    //accessing all charcter in string
    // for(char ch : s){
    //     cout<<ch<<" ";

    // }
    // cout<<"\n";
    // for(int ch : s){
    //     cout<<ch<<" ";

    // }
    string s1={"why"};
    // cout<<s1+" "+s;
    // cout<<"hello"+s1;
    con(s,s1);
    int c=0;
    if(s==s1) cout<<"string match"; //if we use < or > sign then we compare first character 
    else cout<<"string not match";
    cout<<s.length();
    for(char ch:s1){
            if(ch =='a'){
                c=c+1;
            }
            
        }
    cout<<c;

    
//wrp to input 2 strings find out the length of these 2 string if the length of s1 is equal to s2 then concatinate them other wise if the lenth of s1 is greater print the char of s1 seprated by  space if len s2 greater then print te lenth of s2


    
}