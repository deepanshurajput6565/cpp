#include <iostream>
using namespace std;
int main(){
    // int a,b;
    // a=17;
    // b=12;
    // cout<<a+b<<endl;
    

    // int choice;
    // cin>>choice;
    // // 1 for addition 2 for subtraction 3 for multi
    // switch (choice)  //switch-case check the value of argument to execute the cse block
    // {
    // case 1:
    //     cout<<a+b<<endl;
        
    // case 2:
    //     cout<<a-b<<endl;
    //     break;

        
    // case 3:
    //     cout<<a*b;
    //     break;
    // default:
    //     cout<<"thanks for using me";
    
    //     break;
        
        
    // }

    //while loop
    int i=10;   
    while(i<10){
        cout<<i<<endl;
        i+=1; //---- i++ i increase by 1 i +=1 =>i=i+1 => i++
    }

    //do while
    int j=10;
    do{
        cout<<j<<endl;
        j+=1;
        

    }
    while(j<10);

    //for loop
    int k;
    for(k=1;k<10;k++){
        cout<<k<<endl;
        

    }
    int a=10,b=2;
    if(a<b){  // if-else check the condition before execute the program which was written in if else body
        cout<<"a is smaller no";

    }
    else{
        cout<<"b is smaller";

    }

    


}