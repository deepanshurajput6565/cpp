#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int>a;
    int x,c,y,j,c_u=0;
    for(int i=0;i<10;i++){
        cin>>x;
        a.push_back(x);
    }
    int size=a.size();
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<"\n";
    cin>>y;
    for(int i=0;i<size;i++){
        if(y==a[i]){
            c=i;
        }
        
    }
    for(j=size;j>=0;j--){
        if(y==a[j]){
            break;
        }
    }
    cout<<"the last index of item "<<j;

    cout<<"the last index of item "<<c;
    for(int i=0;i<size;i++){
        if(y==a[i]){
            c_u+=i;
        }
        
    }
    cout<<"";
    
 
}