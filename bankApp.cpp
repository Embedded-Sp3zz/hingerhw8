// bankApp.cpp
//

#include "bankAccount.h"

int main(int argc, char* argv[]){
	
	BankAccount jackAccount = BankAccount("Jack Smith", 50);

	BankAccount jillAccount = BankAccount("Jill Brian", 100);

	BankAccount bankArray[3] = { BankAccount("Ralph Kramden", 10), BankAccount("Alice Kramden", 20), BankAccount("Ed Norton", 30) };

	jackAccount.deposit(30);
	jillAccount.deposit(30);

	for(int i = 0; i<3; i++)
	{
		bankArray[i].deposit(30);
	}

	jackAccount.withdraw(20);
	jillAccount.withdraw(20);

	for(int j = 0; j < 3; j++)
	{
		bankArray[j].withdraw(20);
	}

	cout << "Finished the bankApp program" << endl;
	return 0;

}
