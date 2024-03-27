#include <iostream>

class BankAccount {
public:
    BankAccount(std::string accountNumber, double balance);
    ~BankAccount();

    void displayAccountInfo();

private:
    std::string accountNumber;
    double balance;
};

BankAccount::BankAccount(std::string accountNumber, double balance) : accountNumber(accountNumber), balance(balance) {
    std::cout << "Account created with account number: " << accountNumber << std::endl;
}

BankAccount::~BankAccount() {
    std::cout << "Account with account number " << accountNumber << " destroyed." << std::endl;
}

void BankAccount::displayAccountInfo() {
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Balance: $" << balance << std::endl;
}

int main() {
    BankAccount account1("123456789", 1000.0);
    account1.displayAccountInfo();
    return 0;
}

