#include <iostream>
using namespace std;
// W.a.p to input a 2 d array and print it
// w.a.p to find addtion of two matrix
int main(){
    cout<<"enter matrix 1 element "<<endl;
    int a[3][2],b[3][2],c[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    cout<<"matrix 1"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n";
    cout<<"enter matrix 2 element "<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>>b[i][j];
        }
    }
    cout<<"matrix 2"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    cout<<"\n";
    cout<<"sum of matrix 1 and matrix 2"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            c[i][j]=a[i][j]+b[i][j];
        }

    
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }

// w.a.p to find out the sum of all no.s of matrix
// w.a.p to find out the sum of all even no.s and all odd nos of matrix
    int sum=0,even_s=0,odd_s=0;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            sum+=a[i][j];
        }
    }
    cout<<"sum of element of matrix 1 "<<sum<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            if(a[i][j]%2==0){
                even_s+=a[i][j];
            }
            else{
                odd_s+=a[i][j];
            }
        }
    }
    cout<<"sum of even element of matrix 1 "<<even_s<<endl;
    cout<<"sum of odd element of matrix 1 "<<odd_s<<endl;


    

}
