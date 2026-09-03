#include <iostream>
using namespace std;
// int main(){
//     int n,m,magic,digit,sum=0,rev=0,digit_2,no_2;
//     cin>>n;
//     m=n;
//     while(n>0){
//         digit = n%10;
//         sum += digit;
//         n = n/10;
//     }
    
//     no_2=sum;
//     while(sum>0){
//         digit_2 = sum%10;
//         rev = rev*10 + digit_2;
//         sum= sum/10;
//     }
    
//     magic=no_2*rev;
//     if(magic==m){
//         cout<<"magic";

//     }
//     else{
//         cout<<"not magic";
//     }

// }
// wrp to input a no. print it in words
void funct(int n){
    int digit,rev=0,digit_2,c=0;
    while(n>0){
        digit= n%10;
        
        rev = rev*10 + digit;
        n= n/10;
        c++;
        
    }
    
    for(int i=0;i<c;i++){
        digit_2= rev%10;
        switch(digit_2){
            case 1:
                cout<<"one";
                break;
            case 2:
                cout<<"two";
                break;
            case 3:
                cout<<"three";
                break;
            case 4:
                cout<<"four";
                break;
            case 5:
                cout<<"five";
                break;
            case 6:
                cout<<"six";
                break;
            case 7:
                cout<<"seven";
                break;
            case 8:
                cout<<"eight";
                break;
            case 9:
                cout<<"nine";
                break;
            case 0:
                cout<<"zero";
                break;
            default:
                break;
            
            
        }
        rev=rev/10;

    }
}
int main(){
    int n;
    cin>>n;
    
    funct(n);
}