#include <iostream>
using namespace std;
/*
1.w.r.p to print all no.s from 1 to x
2. w.r.p all no.s 100 to 1
3. w.r.p all no.s from x to y
4. w.r.p addition of all the even no.s from 2 to y
5. addition of all the no.s divisible by 7 up to 70
6. multipilcation of first 5 integers
7. table of a given no
8. sum of digit
9. fabonacci series
int main(){
    int a=0,b=1,sum=0,n;
    cin>>n;
    cout<<"\n";
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++){        
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;

    }
  

    
    
}*/
int main(){
    int a=153,digit,sum=0;
    int b=a;
    for(int i=1;a>0;i++){
        digit=a%10;
        sum+=(digit*digit*digit);
        a=a/10;

    }
    if(sum==b){
        cout<<"armstrong no";

    }
    else{
        cout<<"not armstrong";
    }
}