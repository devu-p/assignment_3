//2. Define a class to represent a bank account. Include the following members:

//Data Member:
//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account
//Member Functions
//-To assign values
//-To deposited an amount
//-To withdraw an amount after checking balance
//-To display name and balance

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    BankAccount() {}

    void createAccount() {
        cout << "Enter Account Holder's Name: ";
        cin >> depositorName;
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Account Type (Savings/Current): ";
        cin >> accountType;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        double amount;
        cout << "Enter Amount to Deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }

    void withdraw() {
        double amount;
        cout << "Enter Amount to Withdraw: ";
        cin >> amount;
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void displayInfo() {
        cout << "Account Holder: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.createAccount();
    cout << "\nInitial Account Info:" << endl;
    account.displayInfo();

    int choice;
    do {
        cout << "\nBank Account Menu:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display Account Info" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.deposit();
                break;
            case 2:
                account.withdraw();
                break;
            case 3:
                account.displayInfo();
                break;
            case 4:
                cout << "Thank you for using our banking system!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}


