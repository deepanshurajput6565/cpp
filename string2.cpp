#include <bits/stdc++.h>
using namespace std;
#include <string>
#include <cctype>
//wrp for string s1= my name is string s2 = hello class the output should be my name is class
//same string output hello my name is
// "    "      "     welcome my name is class

int main(){
    string s1={"my name is "};
    string s2={"hello class"};
    cout<<s2.substr(0,5)+s1.substr(5);
    cout<<"\n";
    cout<<s2.substr(0,4)+" "+s1.substr(0,7);
    cout<<"\n";
    cout<<"welcome "+s2.substr(0,5)+s1.substr(5);
    cout<<"\n";

}