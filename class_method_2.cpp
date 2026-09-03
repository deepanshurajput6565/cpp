#include <iostream>
using namespace std;
class student{
    public:
    int power(int n,int power){
        int w=1;
        for(int i=1;i<=power;i++){
            w = w*n;
            
        }
        return w;

    }
    
    void palin(int n){
        int digit,sum=0;
        int p=n;
        int l=len(n);
        
        while(n>0){
            digit=n%10;
            sum = sum+ power(digit,l);
            n= n/10;
            
        }

        if(sum==p){
            cout<<"armstrong";

        }
        else{
            cout<<"not armstrong";
        }

        
        
    }
    int len(int n){
        int len=0;
        while(n>0){
            n=n/10;
            len += 1;
        }
        return len;

    }

};
int main(){
    student s;
    int n;
    cin>>n;
    s.palin(n);

}