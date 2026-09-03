#include <iostream>
using namespace std;

class BANK
{
private:
    int accountnumber;
    string Account_Holder;
    double balance;

public:
    
    BANK()
    {
        balance = 10000;
        pin = 1234;
    }

    
    void createAccounct()
    {
        
        cout << "\nEnter Account No: ";
        cin >> accountnumber;

        cout << "\nEnter Account Holder Name:  ";
        cin >> Account_Holder;
        cout << "\nEnter Initial Balance:  ";
        cin >> Account_Holder;
    }

    
    void withdraw()
    {
        double amount;

        cout << "Enter Amount to Withdraw: ";
        cin >> amount;

        if (amount <= balance && amount >0)
        {
            balance -= amount;
            cout << "Withdrawal Successful." << endl;
            cout << "Remaining Balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    
    void deposit()
    {
        double amount;

        cout << "Enter Amount to Deposit: ";
        cin >> amount;

        if (amount > 0)
        {
            balance += amount;
            cout << "amount deposite Successful." << endl;
            
        }
        else
        {
            cout << "invLID ammount!" << endl;
        }
    }

    
    void checkBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }

  
    void changePin()
    {
        int oldPin, newPin;

        cout << "Enter Old PIN: ";
        cin >> oldPin;

        if (oldPin == pin)
        {
            cout << "Enter New PIN: ";
            cin >> newPin;

            pin = newPin;

            cout << "PIN Changed Successfully!" << endl;
        }
        else
        {
            cout << "Wrong Old PIN!" << endl;
        }
    }

    
    void menu()
    {
        int choice;

        while (true)
        {
            cout << "\n=============================" << endl;
            cout << "      ATM MANAGEMENT SYSTEM" << endl;
            cout << "=============================" << endl;
            cout << "1. Withdraw Money" << endl;
            cout << "2. Deposit Money" << endl;
            cout << "3. Check Balance" << endl;
            cout << "4. Change PIN" << endl;
            cout << "5. Exit" << endl;
            cout << "Enter Your Choice: ";
            cin >> choice;

            if (choice == 5)
            {
                cout << "\nThank You for Using Our ATM!" << endl;
                break;
            }

            if (choice >= 1 && choice <= 4)
            {
                if (verifyPin())
                {
                    switch (choice)
                    {
                    case 1:
                        withdraw();
                        break;

                    case 2:
                        deposit();
                        break;

                    case 3:
                        checkBalance();
                        break;

                    case 4:
                        changePin();
                        break;
                    }
                }
            }
            else
            {
                cout << "Invalid Choice!" << endl;
            }
        }
    }
};

int main()
{
    ATM atm;     
    atm.menu();  

    return 0;
}           qqqqq               qsort   1`1`````````````````````````````````````