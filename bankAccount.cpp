// file bankAccount.cpp
//
// class BankAccount
//

#include "bankAccount.h"

BankAccount::BankAccount(string n, float bal){
	setName(n);
	setBalance(bal);
}


string BankAccount::getName(){
	return customerName;
}

float BankAccount::getBalance(){
	return balance;
}

void BankAccount::deposit(float dep){
	balance += dep;
}

void BankAccount::withdraw(float draw){
	balance -= draw;
}

// private function
void BankAccount::setName(string n){
	this->customerName = n;
}


//private function
void BankAccount::setBalance(float bal){
	this->balance = bal;
}

BankAccount::~BankAccount(){
	cout << "Destroying bank account with name: " << getName() << " and balance: " << getBalance() << endl;
}

