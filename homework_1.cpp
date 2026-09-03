#include <iostream>
using namespace std;
int main(){
    cout<< "Press 1 for biggest of two no.s\npress 2 for area and circumfarence \npress 3 for swapping \npress 4 for leap year or not \npress 5 for logical operator addition, sub,multi,divide,modulus\npress 6 for pas or fail \npress 7 for square and cube of number\ntyper any interger for biggest of three no for \n";
    cout<<"Enter no. 1 to 7 : ";
    int choice;
    cin>>choice;
    int a,b,d;
    float c;
    switch (choice)
    {
    case 1 :
        cout<<"Enter no.1 ";
        cin>>a;
        cout<<"Enter no.2 ";
        cin>>b;
        if(a>b){
            cout<<"no.1 is greter then no. 2";
        }
        else if(a==b){
            cout<<"both are equal";

        }
        else{
            cout<<"no.2 is greter then no. 1";

        }
        break;
        
    case 2 :
        cout<<"Enter value of radius \n";
        cin>>a;
        cout<<"area of circle is ";
        d=a*3.14*a;
        cout<<d<<endl;
        cout<<"circmference is  ";
        b=2*3.14*a;
        cout<<b<<endl;
        break;

    case 3 :
        cout<<"Enter value of a ";
        cin>>a;
        cout<<"Enter value of b ";
        cin>>b;
        d=a;
        a=b;
        b=d;
        cout<<"value of a ";
        cout<<a<<endl;
        cout<<"value of b ";
        cout<<b<<endl;
        break;
        
    case 4 :
        cout<<"Enter Year : ";
        cin>>a;
        if(a%4==0){
            cout<<"leap year";
        }
        else{
            cout<<"not a leap year";
        }
        break;
    case 5 :
        cout<< "Press 1 for addition\npress 2 for subtraction \npress 3 for multiply \npress 4 for divide \npress 5 for modulus\n";
        cout<<"Enter no. 1 to 5 : ";
        int choice;
        cin>>choice;
        switch (choice)
        {
        case 1 :
            cout<<"Enter value of a ";
            cin>>a;
            cout<<"Enter value of b ";
            cin>>b;
            cout<<"the addition is  ";
            cout<<a+b;

            break;
        
        case 2 :
            cout<<"Enter value of a ";
            cin>>a;
            cout<<"Enter value of b ";
            cin>>b;
            cout<<"the subtraction is  ";
            cout<<a-b;

            break;
        case 3 :
            cout<<"Enter value of a ";
            cin>>a;
            cout<<"Enter value of b ";
            cin>>b;
            cout<<"the multiplication is  ";
            cout<<a*b;
            break;
        case 4 :
            cout<<"Enter value of a : ";
            cin>>a;
            cout<<"Enter value of b : ";
            cin>>b;
            c=(a*1.0f)/b;
            cout<<"the division is  ";
            cout<<c;
        
            break;
        default :
            cout<<"Enter value of a ";
            cin>>a;
            cout<<"Enter value of b ";
            cin>>b;
            c=a%b;
            cout<<"the modulus is  ";
            cout<<c;
            break;
        }
        break;
    case 6 :
        cout<<"enter your subject marks\n";
        cout<<"physics marks\n";
        cin>>a;
        cout<<"chenistry marks\n";
        cin>>b;
        cout<<"maths marks\n";
        cin>>d;
        c=(a+b+c)/3.0f;
        if(c>38){
            cout<<"pass";

        }
        else{
            cout<<"fail";
        }
        break;

    case 7 :
        cout<<"Enter no : ";
        cin>>a;
        cout<<"Square of the no. is "<<a*a;
        cout<<"\nCube of the no. is "<<a*a*a;
        break;


    default :
        cout<<"Enter no. 1 ";
        cin>>a;
        cout<<"Enter no. 2 ";
        cin>>b;
        cout<<"Enter no. 3 ";
        cin>>d;
        if(a>b){
            if(a>d){
                cout<<"no. 1 is greatest";
            }
            else{
                cout<<"no. 3 is greatest";
            }
        }
        else{
            if(b>d){
                cout<<"no.2 is greatest";
            }
            else{
                cout<<"no. 3 is greatest";
            }
        }
        break;
    }
}