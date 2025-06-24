#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
    string customer_name;
    string account_number;
    string account_type;
    double balance;

public:
    void initialize(const string& name,const string& number,const string& type, double bal) {
        customer_name = name;
        account_number = number;
        account_type = type;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << ". New balance is " << balance << endl;
    }

    void display_balance() const {
        cout << "Balance: " << balance << endl;
    }
};

class sav_acct : public Account {
private:
    double interest_rate;

public:
    sav_acct() {
        interest_rate = 0.04; 
    }

    void compute_and_deposit_interest() {
        double interest = balance * interest_rate;
        balance += interest;
        cout << "Interest of " << interest << " added. New balance is " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrew " << amount << ". New balance is " << balance << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }
};

class cur_acct : public Account {
private:
    double minimum_balance;
    double service_charge;

public:
    cur_acct() {
        minimum_balance = 1000.0; 
        service_charge = 50.0; 
    }

    void check_minimum_balance() {
        if (balance < minimum_balance) {
            balance -= service_charge;
            cout << "Balance below minimum. Service charge of " << service_charge << " imposed. New balance is " << balance << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrew " << amount << ". New balance is " << balance << endl;
            check_minimum_balance();
        } else {
            cout << "Insufficient balance" << endl;
        }
    }
};
int main() {
    sav_acct savings;
    savings.initialize("ABC","12345","Savings",100000);
    savings.deposit(1000);
    savings.display_balance();
    savings.compute_and_deposit_interest();
    savings.withdraw(2000);
    savings.display_balance();

    cur_acct current;
    current.initialize("XYZ","67890","Current",120000);
    current.deposit(500);
    current.display_balance();
    current.withdraw(1000);
    current.display_balance();
    current.withdraw(1000);
    current.display_balance();

    return 0;
}
