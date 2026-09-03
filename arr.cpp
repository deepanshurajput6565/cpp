// 1. wrt a program to input an array and also printed
// 2. w.r.p to find out the addition of two arrays
// 3. w.r.p to find out the multiplication of 2 arrays 
#include <iostream>
using namespace std;
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    int arr_1[10]={1,2,3,4,99,4,4,5,5,10};
    int arr_2[10]={1,3,2,1,2,3,1,3,3,1};
    int arr_3[10],arr_4[10];
    for(int i=0;i<10;i++){
        arr_3[i]=arr_1[i]+arr_2[i];   
    }
    for(int i=0;i<10;i++){
        cout<<arr_3[i]<<" ";
    }
    cout<<"\n";

    for(int i=0;i<10;i++){
        arr_4[i]=arr_1[i]*arr_2[i];  

    }
    for(int i=0;i<10;i++){
        cout<<arr_4[i]<<" ";

    }
    cout<<"\n";
    

// 1. w.r.p to find out the sum of all no.s of an arrays
// 2. wr.p to find out the sum of all even no.s and all odd no.s of an is_array
// 3. w.r.p to find out the sum of all even no index and all odd no. index of any array 
    int sum=0,sum_even=0,sum_odd=0,sum_odd_1=0,sum_even_1=0;
    for(int i=0;i<10;i++){
        sum=sum+arr_3[i];

    }
    cout<<sum;
    cout<<"\n";
    for(int i=0;i<10;i++){
        if((arr_2[i])%2==0){
            sum_even=sum_even+arr_2[i];

        }
        else{
            sum_odd=sum_odd+arr_2[i];

        }    

    }
    cout<<"even sum ";
    cout<<sum_even;
    cout<<"\n";
    cout<<"even odd ";
    cout<<sum_odd;
    cout<<"\n";

    for(int i=0;i<10;i++){
        if(i%2==0){
            sum_even_1=sum_even_1+arr_2[i];

        }
        else{
            sum_odd_1=sum_odd_1+arr_2[i];

        }    

    }
    cout<<"even sum ";
    cout<<sum_even_1;
    cout<<"\n";
    cout<<"odd sum ";
    cout<<sum_odd_1;
    cout<<"\n";
    
// w.r.p to find out the biggest no.s of an array
// w.r.p to find out the smallest no of array
    int arra[5]={2,35,10,1,9};

    for(int i=0;i<5;i++){
        cout<<arra[i]<<" ";
    }

    int biggest_no=arra[1],smallest_no=arra[1];
    for(int i=0;i<5;i++){
        if(arra[i]>biggest_no){
            biggest_no=arra[i];
        }

    }
    
    
    cout<<"biggest no ";
    cout<<biggest_no;
    cout<<"\n";


    for(int i=0;i<5;i++){
        if(arra[i]<smallest_no){
            smallest_no=arra[i];
        }
    }
    

    
    cout<<"smallest no ";
    cout<<smallest_no<<endl;
    for(int j=0;j<5;j++){
        if(arra[j]==smallest_no){
            cout<<"smallest_no location "<<j+1;
            
        }
    }
    int scrh;
    cin>>scrh;



    for(int j=0;j<5;j++){
        if(arra[j]==scrh){
            cout<<"item location "<<j+1;
            
        }
    }





}