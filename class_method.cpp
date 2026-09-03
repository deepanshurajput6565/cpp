#include <iostream>
using namespace std;
// class student{
//     public :
//     int roll;
//     float age;
//     void show(){
//         cout<<roll<<endl;
//         cout<<age<<endl;
//     }
//     void add(int a,int b){
//         cout<<a+b;
//     }
// };


// //wrp addition of 2 nos.
// class DKC{
//     public :
//     int a;
//     int b;
//     int addittion(){
//         return a+b;
//     }
// };
// int main(){
//     student s;
//     s.roll=5;
//     s.age=14;
//     s.show();
//     DKC m;
//     m.a=17;
//     m.b=192;
//     int x=m.addittion();
//     cout<<x<<endl;
//     int a,b;
//     cin>>a>>b;
//     s.add(a,b);


// }
// class student{
//     public:
//     int a,b;
//     int add(int a,int b){
//         int c=a+b;
//         return c;

//     }
//     int add(int a,int b,int c){
//         int d=a+b+c;
//         return d;

//     }
//     int add(){
//         cout<<a+b;
//     }
// };
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     student s;
//     int x=s.add(a,b);
//     int y=s.add(a,b,c);
//     cout<<x<<endl;
//     cout<<y<<endl;
//     s.a=4;
//     s.b=6;
//     s.add();
// }

class student{
    public:
    int r;
    double area(){
        int ar=3.14*r*r;
        return ar;

    }
    double cir(){
        int c=2*3.14*r;
        return c;

    }

};
// wrp to find out the swaping of 2 nos.
// wrp to find out the factorial of a given no.
class buddy{
    public:
    void swap(int a ,int b){
        int c;
        c=a;
        a=b;
        b=c;
        cout<<a<<" "<<b<<endl;
    }
    int fact(int n){
        
        if (n==1){
            return 1;
        }
        else{
            return n*fact(n-1);

        }
        
    }

};
int main(){
    student s;
    cin>>s.r;
    float ar=s.area();
    float circum=s.cir();
    cout<<ar<<" "<<circum;
    buddy bro;
    int a,b;
    cin>>a>>b;
    bro.swap(a,b);
    int n;
    cin>>n;
    int fac=bro.fact(n);
    cout<<fac;
    
}
