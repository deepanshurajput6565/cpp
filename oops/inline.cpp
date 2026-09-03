#include <bits/stdc++.h>
using namespace std;

inline int square(int n){
    return n*n;
}
int add(int a,int b=6){
    return a+b;
}
int calculate(int a,int b){
    return a+b;
}
int calculate(int a,int b,int c){
    return a+b+c;
}
int calculate(double a,double b){
    return a*b;
}
int main(){
    cout<<"inline function "<<endl;
    cout<<"square "<<square(5);
    cout<<"\ndefault argument function "<<endl;
    cout<<"add(30) "<<add(30)<<endl;
    cout<<"add(30,50) "<<add(30,50)<<endl;

    

    cout<<"\nfunction overloading "<<endl;
    cout<<"addition of two interger "<<calculate(20,30)<<endl;
    cout<<"addition of 3 interger "<<calculate(20,30,40)<<endl;
    cout<<"multipication of two doubles"<<calculate(2.5,4.0)<<endl;


}