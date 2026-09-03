#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1;
    string s2;
    
    getline(cin,s1);
    getline(cin,s2);
    int x=s1.length();
    string s3=s1.substr(x-3,x);
    string s4=s3+s2;
    cout<<s4<<endl;

    int c=0,digit=0,space=0;
    for(char ch:s1){
        ch=tolower(ch);
        if(ch== 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ){
            c += 1;
        }
        else if(isdigit(ch)){
            digit += 1;
            
            //we can use isdigit() function

        }
        else if(isspace(ch)){
            space += 1;
            //alternative isspace()

        }
    }
    cout<<"vowel "<<c<<endl;
    cout<<"no of digits "<<digit<<endl;
    cout<<"no of white spaces "<<space<<endl;
    
    // input 2 strings s1 and s2 find out all the a in s1 and concatinate them with s2 
    int count=0;
    for(char ch: s1){
        ch=tolower(ch);
        if(ch=='a'){
            count += 1;
        }


    }
    string s5(count,'a');
    cout<<s2+s5<<endl;
    int loc=s1.rfind("hi");
    cout<<loc<<endl;
    cout<<s1.insert(4,"class")<<endl;
    cout<<s1.replace(0,3,"hi")<<endl;
    cout<<s1.erase(2,3);

    

}


