#include <iostream>
#include <string>

using namespace std;

class Account {
public:
	int account_no;
	string customer_name;
	int balance;

	Account(int acc, string name, int b) : account_no(acc), customer_name(name), balance(b) {}
	virtual void deposit_money(int amt) = 0;
	virtual void withdraw(int amt) = 0;
	virtual void display_balance() = 0;

	void display() const {
		cout << "Account No: " << this->account_no << endl;
		cout << "Customer Name: " << this->customer_name << endl;
		cout << "Balance: " << this->balance << endl;
	}
};

class Savings : public Account {
public:
	int min_balance;

	Savings(int acc, string name, int b, int min): Account(acc, name, b) {
		this->min_balance = min;
	}

	void deposit_money(int amt) override {
		this->balance += amt;
	}

	void withdraw(int amt) override {
		if(this->balance - amt >= this->min_balance)
			this->balance -= amt;
		else 
			cout << "Cannot Withdraw" << endl;
	}

	void display_balance() override {
		cout << "Balance is: " << this->balance << endl;
	}
};

class Current : public Account {
public:
	int overdue;

	Current(int acc, string name, int b, int over): Account(acc, name, b) {
		this->overdue = over;
	}

	void deposit_money(int amt) override {
		this->balance += amt;
	}

	void withdraw(int amt) override {
		if(this->balance - amt >= overdue)
			this->balance -= amt;
		else 
			cout << "Cannot Withdraw" << endl;
	}

	void display_balance() override {
		cout << "Balance is: " << this->balance << endl;
	}
};

int main(){
	Savings s(1000, "Hello", 4000, 2000);
	Current c(1200, "World", 8000, 3000);

	s.display();
	s.withdraw(200);
	s.deposit_money(300);
	s.display_balance();

	cout << endl;
	
	c.display();
	c.withdraw(200);
	c.deposit_money(300);
	c.display_balance();

	return 0;
}