#include <iostream>
using namespace std;
int main(){
    int a;
    //cin>>a;
    /*int i=1;
    do{
        cout<<i;
        cout<<"\n";
        i=i+1;

    }
    while(a>=i);
   int i=2;
    do{
        cout<<i;
        cout<<"\n";
        i=i+2;
    }
    while(a>=i);
    int i=1,sum=0;
    do{
        sum+=i;
        i+=1;
        
    }
    while(i<=10);
    cout<<sum;
    int temp,i=1;
    cin>>temp;
    int fact=1;
    do{
        fact=fact*i;
        i=i+1;
    }
    while(i<=temp);
    cout<<fact;
    int i=1,x;
    cin>>x;

    do{
        if(i%5==0){
            cout<<i<<endl;
            i=i+1;
        }
        else{
            i=i+1;
        }

    }
    while(i<=x);*/
    int num,sum=0,digit;
    int temp=num;
    cin>>num;
    do{
        digit=num%10;
        sum=sum+digit;
        num=num/10;

    }
    while(digit>0);
    cout<<sum;


}
/*diffrence b/w while and do while loop
 . in while loop if the condition is false for the first time the loop will not execute even once 
 . in the do while loop if the condition is false for the first time the loop will execute atleast once 
*/