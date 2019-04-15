#include <iostream>		

using namespace std;	

// functions being declared
// function for the hacked transaction
void hackedTransaction(int& a, int& b);	
// function for regular transaction
void regularTransaction(int a, int b);	
// function for showing the accounts
void showAccounts(int joe, int terrorists);	

/////////////////////////////////////////////////////////////////////////////////////////////

int main()		//main function
{
	// bank account amounts
	// joes account amount
	int joesAccount = 325;		
	// terrorists account amount
	int terroristsAccount = 50000;	

	// show both accounts
	showAccounts(joesAccount, terroristsAccount);	
	// pause so the user can read
	system("pause");
	cout << "\n/////////////////////////////////////////////" << endl;
	// calls the regular transaction function
	regularTransaction(joesAccount, terroristsAccount);	
	cout << "\n/////////////////////////////////////////////" << endl;
	// pause so user can read
	system("pause");
	cout << "\n";
	// show both accounts
	showAccounts(joesAccount, terroristsAccount);	
	// pause so user can read
	system("pause");		
	cout << "\n";
	cout << "\n/////////////////////////////////////////////" << endl;
	// calls hacked transaction function
	hackedTransaction(joesAccount, terroristsAccount);
	cout << "\n/////////////////////////////////////////////" << endl;
	// pause so user can read
	system("pause");
	cout << "\n";
	// calls the show accounts function
	showAccounts(joesAccount, terroristsAccount);	
	// pause so user can read
	system("pause");	

	return 0;		
}

/////////////////////////////////////////////////////////////////////////////////////////////

// This function switches the two funds using references
void hackedTransaction(int& a, int& b) {	
	// displays message telling the user that the funds are being switched
	cout << "Switching funds...\n";		
	// ints for switching 
	int Hack = a;	
	// for switching
	a = b;	
	// completed 
	b = Hack;			
	// displays a message telling the user that the transaction is completed
	cout << "Transaction Complete.";		
	// return
	return;
}

/////////////////////////////////////////////////////////////////////////////////////////////

// this function uses copies to switch
void regularTransaction(int a, int b) {	
	// displays a message telling the user that the regular transaction is starting
	cout << "Starting regular transaction..\n";		
	// declares the hack
	int Hack = a;
	// for switching
	a = b;		
	// completed
	b = Hack;	
	// displays a message telling the user that the transaction is completed
	cout << "Transaction Complete.";		
	// return
	return;	
}

/////////////////////////////////////////////////////////////////////////////////////////////

// prints the balances of both joe and the terrorists
void showAccounts(int joe, int terrorists) {	
	// displays  what the current balances are of both joe and the terrorists
	cout << "Current account balances:\n";		
	// spacer
	cout << "__________________________\n";	
	// display terrorist balance
	cout << "Terrorists:==$" << terrorists << endl;
	// display joes balance
	cout << "Joe:=========$" << joe << endl;	
	// spacer
	cout << "__________________________\n\n";	
	//return
	return;		
}

/////////////////////////////////////////////////////////////////////////////////////////////