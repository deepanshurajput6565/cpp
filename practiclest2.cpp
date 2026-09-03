#include <bits/stdc++.h>
using namespace std;
void multi(int n){
    for(int i=1;i<=10;i++){
        cout<<n<<" x "<<i<< " = "<<i*n;
        cout<<"\n";
    }
}
int main(){
    while(true){
        cout<<"enter 1 for again enter value : ";
        int a;
        cin>>a;
        if(a==1){
            int n;
            cout<<"enter no which you want to find table : ";
            cin>>n;
            multi(n);
        }
        else{
            cout<<"thanks for using me";
            break;
        }
    }
}
//Modular programming is a method of writing programs by dividing them into small, independent parts called modules. Each module performs a specific task, which makes the entire program easier to understand, manage, and debug. This approach helps keep the code organized, reduces complexity, and allows modules to be reused in other programs. It also makes updating and testing the program simpler because you can work on one module without affecting the others.
