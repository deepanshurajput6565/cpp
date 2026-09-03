#include <iostream>
using namespace std;
int sum(int);
int main(){
    int n,x;
    cin>>n;
    x=sum(n);
    cout<<x;

}
//sum of n term


int sum(int n){
    if (n==1){
        return 1;

    }
    else{
        return (n+sum(n-1));
    }
}
//wrp to print fibonaci series using recurstion

int fib(int n){

}