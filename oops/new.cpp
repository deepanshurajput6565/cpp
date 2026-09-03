#include <bits/stdc++.h>
using namespace std;
class student{
    public:
        int p,c,m;
        int roll_no;
        string name,div;
        int per;
    

    
    void input(){
        cout <<"enter your details like name rollno and your pcm marksc ";
        cin>>name;
        cin>>roll_no;
        cin>>p>>c>>m;
    }
    void process(){
        per=(p+c+m)/3;
        if(per>=60){
            div="first";
        }
        if(per>=40){
            div="second";
        }
        if(per>=33&&per<40){
            div="thrid";
        }
    }
    void display(){
        cout<<"\nstudent name "<<name;
        cout<<"\nStudent roll no "<<roll_no;
        cout<<"\nstudent physics marks "<< p;
        cout<<"\nstudent chem marks "<< c;
        cout<<"\nstudent maths marks "<< m;
        cout<<"\nDivison  of student "<< div;
        


    }
};
class callby{
    public:

    void callbyvalue(int x){
        x=x+10;
        cout<<"call by value"<<x;

    }
    void callbyrefrence(int &x){
        x +=10;
        cout<<"\ncall by referance"<<x;
    }
    void callbyaddress(int *x){
        *x += 10;
        cout<<"\ncall by address"<<*x;
    }
};

int main(){
    student stu;
    // stu.input();
    // stu.process();
    // stu.display();
    callby c;
    int x=10;
    c.callbyvalue(x);
    c.callbyrefrence(x);
    c.callbyaddress(&x);
    

}

