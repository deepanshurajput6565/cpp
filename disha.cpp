#include <iostream>
using namespace std;

int main()
{   
    int a,b,c;

    cout << "Press 1 for addition\npress 2 for subtraction \npress 3 for multiply \npress 4 for divide \npress 5 for modulus\n";
    cout << "Enter no. 1 to 5 : ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter value of a ";
        cin >> a;
        cout << "Enter value of b ";
        cin >> b;
        cout << "the addition is  ";
        cout << a + b;

        break;

    case 2:
        cout << "Enter value of a ";
        cin >> a;
        cout << "Enter value of b ";
        cin >> b;
        cout << "the subtraction is  ";
        cout << a - b;

        break;
    case 3:
        cout << "Enter value of a ";
        cin >> a;
        cout << "Enter value of b ";
        cin >> b;
        cout << "the multiplication is  ";
        cout << a * b;
        break;
    case 4:
        cout << "Enter value of a : ";
        cin >> a;
        cout << "Enter value of b : ";
        cin >> b;
        c = (a * 1.0f) / b;
        cout << "the division is  ";
        cout << c;

        break;
    default:
        cout << "Enter value of a ";
        cin >> a;
        cout << "Enter value of b ";
        cin >> b;
        c = a % b;
        cout << "the modulus is  ";
        cout << c;
        break;
    }
}