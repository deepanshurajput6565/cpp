#include <iostream>
using namespace std;
void add(){
    int a,b;
    cin>>a>>b;
    cout<<a+b<<endl;

}

void sub(){
    int a,b;
    cin>>a>>b;
    cout<<a-b<<endl;

}

void multi(){
    int a,b;
    cin>>a>>b;
    cout<<a*b<<endl;

}

void  div(){
    float a,b;
    cin>>a>>b;
    cout<<a/b<<endl;

}

void circ(){
    int r;
    cin>>r;
    cout<<2*3.14*r<<endl;

}

void area(){
    int r;
    cin>>r;
    cout<<3.14*r*r<<endl;
}

void all(){
    int a,b;
    cin>>a>>b;
    cout<<"addition : "<<a+b<<endl;
    cout<<"subtraction : "<<a-b<<endl;
    cout<<"multiplication : "<<a*b<<endl;
    cout<<"division : "<<(a*1.0f)/b<<endl;

}
//wrp to find out the swapping of two nos
void swap(){
    int a,b;
    a=7;
    b=6;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
}
//wrp to find out the average and modulus of 2 nos.
int mod(){
    int a,b,mod;
    cin>>a>>b;
    mod=a%b;  
    return mod;


}
int avr_2(){
    int a,b,avr;
    cin>>a>>b;
    avr=(a+b)/2;
    
    return avr;

}
//wrp to find out the addition of 3 nos and then find out the square of this addition
int sq(){
    int a,b,c,d;
    d=a+b+c;
    return d;
}
//wrp to find out the average of three nos.
int avr_3(){
    int a,b,c,d;
    d=(a+b+c)/2;
    return d;
}

//wrp to find out the area and circumferance of a circle
int cir(){
    int r,c;
    cin>>r;
    c=2*3.14*r;
    return c;
    
}
int area_2(){
    int r,c;
    cin>>r;
    c=3.14*r*r;
    return c;
    

}
//wrp to find out the swaping of two nos.
int swap_2(){
    int a,b;
    a=7;
    b=6;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
    return 0;
}

//wrp to find out the addtion sub,multi,division,of 2 nos.
int all_2(){
    int a,b;
    cin>>a>>b;
    cout<<"addition : "<<a+b<<endl;
    cout<<"subtraction : "<<a-b<<endl;
    cout<<"multiplication : "<<a*b<<endl;
    cout<<"division : "<<(a*1.0f)/b<<endl;
    return 0;

}
//wrp to find out the subtraction od two nos.
int sub_2(){
    int a,b,c;
    cin>>a>>b;
    c=a-b;
    return c;
    
}
//wrp to find out the sum of digits
int sum_digit(){
    int n,digit,sum=0;
    cin>>n;
    while(n>0){
        digit=n%10;
        sum += n;
        n=n/10;

    }
    return sum;
    

}

int fact(){
    int fac=1,n;
    cin>>n;
    while (n>0){
        fac=fac*n;
        n--;
    }
    return fac;
}
void prime(int n){
    int i;
    if(n==1){
        cout<<"not prime";
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"not prime";
            break;
        }
    }
    if(i==n){
        cout<<"prime";
    }
}
void prime(int n){
    int i,c=0;
    if(n==1){
        cout<<"not prime";
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            c+=1;
            cout<<"not prime";
            break;
        }
    }
    if(c==0){
        cout<<"prime";
    }
}
void check(){

    string str = "disha garg";
    string str1 = "motu";
    int c=0;

    for (int i = 0; i <= str.length() - str1.length(); i++) {
        if (str.compare(i, str1.length(), str1) == 0) {
            c += 1;
            break;
        }
    }

    if (c==0){
        cout << "Substring does not exist";
    }
    else{
        cout << "Substring exist";
    }

}
int main(){
    // add();
    // sub();
    // multi();
    // div();
    // area();
    // circ();
    // all();
    // swap();
    prime(6);
    string str = "Hello World";
    string sub = "World";

    if (str.find(sub) != string::npos) {
        cout << "Substring exists";
    } else {
        cout << "Substring does not exist";
    }
    return 0;

}




