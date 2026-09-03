#include <iostream>
using namespace std;
//wrp to find out the addition of 2 nos 
int add(int a,int b){
    int z;
    z=a+b;
    return z;
}
//wrp to find out the addtion of 3 nos
int add_3(int a, int b,int c){
    int z;
    z=a+b+c;
    return z;
}
//wrp to find average and modulus of 2 no and also find out the sum and average and modulus
int avr(int a,int b){
    int z,x,y;
    z=(a+b)/2;
    
    return z;
}
int mod(int a,int b){
    int z;
    z=a%b;
    return z;


}

//wrp to find out averge of 3 nos

int avr_3(int a,int b,int c){
    int z;
    z=(a+b+c);
    return z;

}
//wrp all opertator
int opr(int a,int b){
    int x,y,z;
    x=a+b;
    y=a-b;
    z=a%b;
    cout<<"addition "<<x<<endl;
    cout<<"subtraction "<<y<<endl;
    cout<<"modulus "<<z<<endl;
    

}
//wrp to input marks of 3 subject find outthe percentage if the percentage is greater than equal to 50 print pass otherwise fail
int report(int marks){
    if(marks>=50){
        cout<<"pass";
    }
    else{
        cout<<"fail";
    }
    return 0;

}
//are and circumfrerance
int area(int r){
    int z;
    z=3.14*r*r;
    return z;

}
int cir(int r){
    int z;
    z=3.14*r*2;
    return z;

}
//swaping
int swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<< a<<b;
    return 0;

}
//factorial of a given no
int fact(int n){
    int fac=1;
    while(n>0){
        fac=fac*n;
        n -= 1;

    }
    return fac;
}
//sum of digit
int sum_digit(int n){
    int digit,sum=0;
    while(n>0){
        digit=n%10;
        sum += digit;
        n /= 10;

    }
    return sum;
}
//sum of all nos of an array
int sum_array(int arr[]){
    size_t totalArraySize = sizeof(arr); 

    // Get the size of a single element in bytes
    size_t elementSize = sizeof(arr[0]); 

    // Calculate the number of elements
    size_t numberOfElements = totalArraySize / elementSize;
    int sum=0;

    
    for(int i=0;i<numberOfElements;i++){
        sum += arr[i];
        
    }
    return sum;
    
}
//biggest no of an array
int bigger(int myArray[]){
    size_t totalArraySize = sizeof(myArray); 

    // Get the size of a single element in bytes
    size_t elementSize = sizeof(myArray[0]); 

    // Calculate the number of elements
    size_t numberOfElements = totalArraySize / elementSize;
    int big=myArray[0];
    for(int i=0;i<numberOfElements;i++){
        if(big>myArray[i]){
            big=myArray[i];
        }
    }
    return big;

}


//sum of all the nos of an matrix 
//fibonacci series using function
