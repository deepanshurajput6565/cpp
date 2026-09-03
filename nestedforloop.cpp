#include <iostream>
using namespace std;
int main(){
    for(int i=1 ; i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n";

    for(int i=1 ; i<=4;i++){
        for(int j=1;j<=3;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n";

    for(int i=1 ; i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<i;
        }
        cout<<"\n";
    }
    cout<<"\n";

    for(int i=1 ; i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<j;
        }
        cout<<"\n";
    }
    cout<<"\n";

    for(int i=5 ; i>=1;i--){
        for(int j=1;j<=5;j++){
            cout<<i;
        }
        cout<<"\n";
    }
    cout<<"\n";
    for(int i=1 ; i<=5;i++){
        for(int j=5;j>=1;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    cout<<"\n";
    
    for(int i=1 ; i<=4;i++){
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n";

    for(int i=1 ; i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
    cout<<"\n";

    for(int i=5 ; i<=1;i++){
        for(int j=i;j>=1;j--){
            cout<<i;
        }
        cout<<"\n";
    }
    cout<<"\n";


    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            cout<<"*";
        }
        cout<<"\n";
        
    }
    cout<<"\n";

    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            cout<<j;
        }
        cout<<"\n";
        
    }
    cout<<"\n";

    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            cout<<i;
        }
        cout<<"\n";
        
    }
    cout<<"\n";

    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
        
    }
    cout<<"\n";

    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<"\n";
        
    }
    cout<<"\n";

    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
        
    }
    cout<<"\n";

    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            cout<<"*";
        }
        cout<<"\n";
        
    }
    cout<<"\n";


    for(int i=1;i<=4;i++){
        for(int k=3;k>=i;k--){
            cout<<" ";
            

        }
        
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        for(int m=1;m<=i;m++){
            
            if((i-m)==0){
                break;
            
            }
            cout<<(i-m);
    
        }
        cout<<"\n";
        
        
        
        
    }
    cout<<"\n";

}
