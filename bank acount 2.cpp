#include<iostream>
#include<string>
using namespace std;

class bankAccount {
    private:
        string accountholdername;
        double balance;

    public:

        void OpenAccount(string name, double initialbalance) {
            accountholdername = name;
            balance = initialbalance;
        }


        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposited: " << amount << endl;
            } else {
                cout << "Invalid deposit amount" << endl;
            }
        }


        void withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            } else {
                cout << "Invalid withdraw amount or insufficient balance" << endl;
            }
        }

        
        double getBalance() {
            return balance;
        }
}; 

int main() {
    cout << "Enter account holder name: ";
    string name;
    getline(cin, name);
    cout << "Enter initial balance: ";
    double initialbalance;
    cin >> initialbalance;
   
    bankAccount account;
    account.OpenAccount(name, initialbalance);

    cout << "Enter amount to deposit: ";
    double depositAmount;
    cin >> depositAmount;
    account.deposit(depositAmount);

    cout << "Enter amount to withdraw: ";
    double withdrawAmount;
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    cout << "Account holder name: " << name << endl;
    cout << "Current balance: " << account.getBalance() << endl;

    return 0;
}
