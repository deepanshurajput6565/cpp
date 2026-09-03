#include <iostream>
using namespace std;
// wrt a program to print all no.s to 1 to 10
/*
int main(){
    int a;
    a=1;
    while(a<=10){
        cout<<a<<endl;
        a+=1;

    }
}
// all odd no 1 to 100

int main(){
    int a;
    a=1;
    while(a<=100){
        cout<<a<<endl;
        a+=2;

    }
}
// all even no 2 to 50

int main(){
    int a;
    a=0;
    while(a<=50){
        cout<<a<<endl;
        a+=2;

    }
}
// all no.s from 100 to 1
int main(){
    int a;
    a=100;
    while(a>=1){
        cout<<a<<endl;
        a-=1;

    }
}
// all no.s from 1 to x

    
int main(){
    int x,a;
    a=1;

    cin>>x;
    while(a<=x){
        cout<<a<<endl;
        a+=1;

    }
}
// all even no.s 2 to y 
int main(){
    int y,a;
    a=2;

    cin>>y;
    while(a<=y){
        cout<<a<<endl;
        a+=1;

    }
}   

// all no.s x to y
int main(){
    int y,x;
    cin>>x;

    cin>>y;
    while(x<=y){
        cout<<x<<endl;
        x+=1;

    }
} 
// wrt a program to find out the addition of all nos of 1 to 10
int main(){
    int a=1,sum=0;
    while(a<=10){
        sum+=a;
        a+=1;

    }
    cout<<sum;

}
// addition of all even nos 2 to 50
int main(){
    int a=2,sum=0;
    while(a<=50){
        sum+=a;
        a+=1;
    }
    cout<<sum;
}

// addition of all nos from 100 to 1
int main(){
    int a=100,sum=0;
    while(a>=1){
        sum+=a;
        a-=1;
    }
    cout<<sum;
}

// addition of all odd no.s 1 to 30
int main(){
    int a=1,sum=0;
    while(a<=30){
        sum+=a;
        a+=2;
    }
    cout<<sum;
}
// addition of all no.s of 1 to x
int main(){
    int a=1,x,sum=0;
    cin>>x;
    while(a<=x){
        sum+=a;
        a+=1;
    }
    cout<<sum;
}

// addition of all even no.s 2 to y
int main(){
    int a=2,y,sum=0;
    cin>>y;
    while(a<=y){
        sum+=a;
        a+=2;
    }
    cout<<sum;
}

// sum of all no.s x to y
int main(){
    int x,y,sum=0;
    cout<<"enter value of x";
    cin>>x;
    cout<<"\nenter value of x";
    cin>>y;
    while(x<=y){
        sum+=x;
        x+=1;
    }
    cout<<sum;
}

// multipication of first 5 integers
int main(){
    int x=1,mult=1;
    while(x<=5){
        mult*=x;
        x+=1;
    }
    cout<<mult;
}*/
// factorial
int main(){
    int fact=1,a;
    cout<<"Enter no ";
    cin>>a;
    cout<<"\nfactorial ";
    while(a>=1){
        fact=fact*a;
        a-=1;
    
    }
    cout<<fact;

}
// multiply
int main(){
    int a,i=1;
    cout<<"Enter no to find table ";
    cin>>a;
    while(a<=10){
        cout<<a<<"x"<<i<<"="<<i*a<<endl;
        i+=1;
    }
}