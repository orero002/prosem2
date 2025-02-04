#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum) : accountNumber(accNum), balance(0) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && (balance - amount >= 0)) {
            balance -= amount;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount myAccount("123456789");

    myAccount.deposit(500);
    
    // Attempting withdrawal
    myAccount.withdraw(400);

    cout << "The final balance is $" << myAccount.getBalance()<<endl;

    return 0;
}


