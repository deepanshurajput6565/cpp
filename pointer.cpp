#include <iostream>
using namespace std;
void swap(int*,int *);

int main(){
    int a=89;
    int b=2;
    int *p;
    p=&a;
    cout<<p<<endl;
    cout<<*p<<endl;
    swap(&a,&b);
    cout<<a<<" "<<b;

}
void swap(int *p,int *q){
    int t;
    t=*p;
    *p=*q;
    *q=t;


}

