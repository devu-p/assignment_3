//Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.

#include <iostream>
using namespace std;

class BankAccount 
{
private:
    int accountNumber;
    double balance;

public:
    BankAccount() 
    {
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter initial balance: $";
        cin >> balance;
    }

    void displayInfo() 
    {
        cout << "\nAccount Info:" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }

    void deposit() 
    {
        double amount;
        cout << "Enter deposit amount: $";
        cin >> amount;
        if (amount > 0) 
        {
            balance += amount;
            cout << "Deposit successful. New balance: $" << balance << endl;
        } 
        else 
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw() 
    {
        double amount;
        cout << "Enter withdrawal amount: $";
        cin >> amount;
        if (amount > 0 && amount <= balance) 
        {
            balance -= amount;
            cout << "Withdrawal successful. New balance: $" << balance << endl;
        } else if (amount > balance) 
        {
            cout << "Insufficient funds." << endl;
        } else 
        {
            cout << "Invalid withdrawal amount." << endl;
        }
    }
};

int main() 
{
    BankAccount account;
    int choice;
    do 
    {
        cout << "\nBank Account Menu:" << endl;
        cout << "1. Display Account Info" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                account.displayInfo();
                break;
            case 2:
                account.deposit();
                break;
            case 3:
                account.withdraw();
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
}
