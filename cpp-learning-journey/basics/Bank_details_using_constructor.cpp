#include <iostream>
using namespace std;

class BankAccount {
    string accountHolder;
    long accountNumber;
    double balance;

public:
    // Constructor to initialize bank account details
    BankAccount() {
        accountHolder = "John Doe";
        accountNumber = 123456789;
        balance = 5000.00;
    }

    // Function to credit (deposit) amount
    void credit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount credited: Rs. " << amount << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }

    // Function to debit (withdraw) amount
    void debit(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount debited: Rs. " << amount << endl;
        } else {
            cout << "Invalid amount or insufficient balance!" << endl;
        }
    }

    // Function to fetch and display bank details
    void fetchDetails() {
        cout << "\n========== BANK ACCOUNT DETAILS ==========" << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: Rs. " << balance << endl;
        cout << "=========================================\n" << endl;
    }
};

int main() {
    // Create object of BankAccount class
    BankAccount account;

    // Display initial bank details
    cout << "--- Initial Bank Details ---" << endl;
    account.fetchDetails();

    // Perform credit operation
    cout << "--- Credit Operation ---" << endl;
    account.credit(2000);
    account.fetchDetails();

    // Perform debit operation
    cout << "--- Debit Operation ---" << endl;
    account.debit(1500);
    account.fetchDetails();

    // Try to debit more than balance
    cout << "--- Try Invalid Debit ---" << endl;
    account.debit(10000);

    return 0;
}
