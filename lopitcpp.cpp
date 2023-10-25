// 10:10AM
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int answer, day, month, year, bmonth, bday, byear, current, birthdate, age, minrange = 100000, maxrange = 999999, pin = rand();
	string name, address, gender,acctype, birthday;
	double inidepo, deposit,balance, withdraw;
	char answer2,answer3;
	 
int main(int argc, char** argv) {
do {

	cout<<"\n\t\t\t\t\t\t----------------------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\t\t\t\t!LOPIT BANKING SYSTEM";
	cout<<"\n\t\t\t\t\t\t----------------------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\t\t\t\t1. Open a new account\n\t\t\t\t\t\t\t\t\t2. Balance Inquiry\n\t\t\t\t\t\t\t\t\t3. Deposit\n\t\t\t\t\t\t\t\t\t4. Withdraw\n\t\t\t\t\t\t\t\t\t5. View Account Information\n\t\t\t\t\t\t\t\t\t6. Close Account\n\t\t\t\t\t\t\t\t\t7. Exit Program\n";
	cout<<"\t\t\t\t\t\t\t\t\t ";
	cin>>answer;
	switch(answer){	
	case 1: 
	system("cls");
	cout<<"\n\t\t\t\t\t\t----------------------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\t\t\t\t!LOPIT BANKING SYSTEM";
	cout<<"\n\t\t\t\t\t\t----------------------------------------------------------------------------\n";
	cout<<"\n\t\t\t\t\t\t\t\t\tOpening new account";
	cout<<"\n\n\t\t\t\t\t\t\t\tEnter full name(FN, LN, MN): ";
	cin.ignore();
	getline(cin, name);
	cout<<"\n\t\t\t\t\t\t\t\tAddress: ";
	getline(cin, address);
	cout<<"\n\t\t\t\t\t\t\t-------------------------------------------------------------\n";
	cout<<"\n\t\t\t\t\t\t\t\t\t\tCurrent Date\n";
	cout<<"\n\t\t\t\t\t\t\t\tEnter Day today(1 - 31): ";
	cin>>day;
	if (day <=0 || day > 31) {       // checks if the inputted current date is valid 
		system("cls");
		cout<<"\n\t\t\t\t\t\t\t\t\tInvalid Day.";
	}
	else {
		cout<<"\n\t\t\t\t\t\t\t\tEnter Month today(1 - 12): ";
	cin>>month;
	if(month <=0 ||month > 12) {  // checks if inputted current month is valid
		system("cls");
		cout<<"\n\t\t\t\t\t\t\t\t\tInvalid Month.";
		 }
		 else { 
		 	cout<<"\n\t\t\t\t\t\t\t\tEnter Year today: ";  
	        cin>>year;
	        cout<<"\n\t\t\t\t\t\t\t\tThe date today is "<<day<<"/"<<month<<"/"<<year<<".";
		cout<<"\n\t\t\t\t\t\t\t-------------------------------------------------------------\n";
	cout<<"\n\n\t\t\t\t\t\t\t\t\t\tBirth Date\n";
		cout<<"\n\t\t\t\t\t\t\t\tEnter birth day (1-31): ";
		cin>>bday;
		if(bday<=0 ||bday > 31) { //checks if inputted birth day is valid
		system("cls");
		cout<<"\n\t\t\t\t\t\t\t\tInvalid birth day, choose from 1-31 only.";
		}
		else {
		cout<<"\n\t\t\t\t\t\t\t\tEnter birth month (1-12): ";
		cin>>bmonth;
		if(bmonth <=0 ||bmonth > 12) {
		system("cls");
		cout<<"\n\t\t\t\t\t\t\t\tInvalid birth month, choose from 1-12 only.";
		}
		else { 
		cout<<"\n\t\t\t\t\t\t\t\tEnter Birth year: ";
		cin>>byear;
		age = year - byear;
		if (month < bmonth ||month == bmonth && day < bday) {
		age--;	
		}
		cout<<"\n\t\t\t\t\t\t\t\tYour birthday is "<<bday<<"/"<<bmonth<<"/"<<byear<<".";
		
		if (age >= 18) {
	    cout<<"\n\t\t\t\t\t\t\t-------------------------------------------------------------\n";
     	cout<<"\t\t\t\t\t\t\t\t\t\tGender\n";
			cout<<"\n\n\t\t\t\t\t\t\t\tGender(M or F): ";
			cin>>gender;
			while (gender != "M" && gender != "m" && gender!= "F" && gender != "f") {
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t\t\tInvalid Gender, choose M or F only: ";
			cin>>gender;		
			}
			
			if (gender == "M" || gender == "m") {
				gender = "Male";
				cout<<"\t\t\t\t\t\t\t\tGender is "<<gender;
			}
				else if (gender == "F" || gender == "f") {
				gender = "Female";
				cout<<"\t\t\t\t\t\t\t\tGender is "<<gender;
			}	
				cout<<"\n\t\t\t\t\t\t\t-------------------------------------------------------------\n";
     	cout<<"\t\t\t\t\t\t\t\t\t\tAccount Type\n";
		    cout<<"\n\n\t\t\t\t\t\t\t\tAccount Type(S for Savings, C for Current): ";
		    cin>>acctype;
		while(acctype!= "S" && acctype!= "s" && acctype!= "C" &&  acctype!= "c") {
			cout<<"\n\n\t\t\t\t\t\t\t\tInvalid account type, choose from Savings(S) and Current(C) only: ";
		    cin>>acctype;
		}
		
		if (acctype == "S"|| acctype == "s") {
			acctype = "Savings";
			cout<<"\t\t\t\t\t\t\t\tAccount type is "<<acctype<<" account";
			cout<<"\n\t\t\t\t\t\t\t-------------------------------------------------------------\n";
     	cout<<"\n\t\t\t\t\t\t\t\t\t\tInitial Deposit\n";
			cout<<"\n\t\t\t\t\t\t\t\tInitial Deposit(Minimum of 5000): ";
				cin>>inidepo;
				balance += inidepo;
		
			while (inidepo < 5000) {
				cout<<"\n\n\t\t\t\t\t\t\t\tInitial deposit is not sufficient, reenter: ";
				cin>>inidepo;
				balance += inidepo;
			}
		}
		else if (acctype == "C" || acctype == "c") {
			acctype = "Current";
			cout<<"\n\t\t\t\t\t\t\t\tAccount type is "<<acctype<<" account";
			 cout<<"\n\t\t\t\t\t\t\t-------------------------------------------------------------\n";
     	cout<<"\n\t\t\t\t\t\t\t\t\t\tInitial Deposit\n";
				cout<<"\n\n\t\t\t\t\t\t\t\tInitial Deposit(Minimum of 10000): ";
				cin>>inidepo;
			while (inidepo < 10000) {
				cout<<"\n\t\t\t\t\t\t\t\tInitial deposit is not sufficient, reenter: ";
				cin>>inidepo;
			}		
		}
            	cout<<"\n\n\t\t\t\t\t\t\t\tSystem Generated PIN: "<<pin;
				cout<<"\n\t\t\t\t\t\t\t\tAccount Successfully Created!";
			
			
			
			
				
		}
		else {
			system("cls");
			cout<<"\n\t\t\t\t\t\t\t\tYou are too young to open an account.\n\n";
		}
		}
	
		}
	
		 }

	}
	getline(cin, address);
	
	
	break;
	case 2: 
	system("cls");
	cout<<"\n\t\t\t\t\t\t----------------------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\t\t\t\t!LOPIT BANKING SYSTEM";
	cout<<"\n\t\t\t\t\t\t----------------------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\t\t\t\tBalance Inquiry\n";
	if(balance == 0) {
		cout<<"\n\t\t\t\t\t\t\t\t\tYou have no money, deposit first.\n\n";
		  }
	else {
	cout<<"\n\n\t\t\t\t\t\t\t\t\tBalance: "<<balance<<endl;
	}
	break;
	case 3: 
	system("cls");
	cout<<"\n\t\t\t\t\t\t----------------------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\t\t\t\t!LOPIT BANKING SYSTEM";
	cout<<"\n\t\t\t\t\t\t----------------------------------------------------------------------------\n";
	if (inidepo <=0) {
		cout<<"\t\t\t\t\t\t\t\t\t\tCreate an account first.\t ";
	}
	else {
	cout<<"\n\t\t\t\t\t\t\t\t\tHow much do you want to deposit?: ";
	cin>>deposit;
		do {

	
	
	if (acctype == "Savings") {
		while (deposit < 300 || deposit < 0) {
			cout<<"\t\t\t\t\t\t\t\t\tEntered amount is not valid, try again: ";
			cin>>deposit;
		}
	}
	if (acctype == "Current") {
		while (deposit < 500 || deposit < 0) {
			cout<<"\t\t\t\t\t\t\t\t\tEntered amount is not valid, try again: ";
			cin>>deposit;
		}
	}

	cout<<"\t\t\t\t\t\t\t\t\tConfirm deposit of "<<deposit<<" ?(Y/N)";
	cin>>answer2;
	if (answer2 == 'Y') {
        
			cout<<"\t\t\t\t\t\t\t\t\tSuccessfully deposited "<<deposit;
			balance += deposit;
			cout<<"\n\t\t\t\t\t\t\t\t\tNew Balance: "<<balance;
	}
}
while (answer2 != 'Y');
        }
	break;
	// option number 4
	case 4: 
	system("cls");
	cout<<"\n\t\t\t\t\t\t----------------------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\t\t\t\t!LOPIT BANKING SYSTEM";
	cout<<"\n\t\t\t\t\t\t----------------------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\t\t\t\tWithdraw\n";
	if (balance <= 0) {
	cout<<"\t\t\t\t\t\t\t\t\tYou have no balance, deposit first.\n";	
	}
	else {
		do {
				cout<<"\n\t\t\t\t\t\t\t\t\tHow much do you want to withdraw?: ";
	    cin>>withdraw;
	    while (withdraw <= 0 || withdraw > balance) {
		cout<<"\n\t\t\t\t\t\t\t\t\tInvalid amount, try again: ";
		cin>>withdraw;
 	           		                                        }
 	    cout<<"\n\t\t\t\t\t\t\t\t\tConfirm withdrawal of "<<withdraw<<" ?";
 	    cin>>answer3;
 	    
 	    if (answer3 == 'Y' || answer3 == 'Y' ) {
 	          system("cls");
 	          	cout<<"\n\t\t\t\t\t\t----------------------------------------------------------------------------\n";
              	cout<<"\t\t\t\t\t\t\t\t\t!LOPIT BANKING SYSTEM";
	            cout<<"\n\t\t\t\t\t\t----------------------------------------------------------------------------\n";
 	    	    cout<<"\n\t\t\t\t\t\t\t\t\tSuccessfully withdrew "<<withdraw;
 	    	    balance -= withdraw;
 	    	    cout<<"\n\t\t\t\t\t\t\t\t\tNew Balance:  "<<balance;
		 }
		}
		while (answer3 =='N' || answer3 == 'n');
	    }
	    
    break;	
	
	//option number 5
	case 5: 
	system("cls");
		cout<<"\n\t\t\t\t\t\t----------------------------------------------------------------------------\n";
        cout<<"\t\t\t\t\t\t\t\t\t!LOPIT BANKING SYSTEM";
	    cout<<"\n\t\t\t\t\t\t----------------------------------------------------------------------------\n";
	cout<<"\n\t\t\t\t\t\t\t\t\ Account Information";
	cout<<"\n\t\t\t\t\t\t\t\t\tFull Name: "<<name;
	cout<<"\n\t\t\t\t\t\t\t\t\tFull Name: "<<address;
	cout<<"\n\t\t\t\t\t\t\t\t\tFull Name: "<<name;
	cout<<"\n\t\t\t\t\t\t\t\t\tFull Name: "<<name;
	cout<<"\n\t\t\t\t\t\t\t\t\tFull Name: "<<name;
	cout<<"\n\t\t\t\t\t\t\t\t\tFull Name: "<<name;
	cout<<"\n\t\t\t\t\t\t\t\t\tFull Name: "<<name;
	
	
	break;
	
	//option number 6
	case 6: 
	system("cls");
	cout<<"Close Account";
	break;
	}
}
	while (answer!=7);
	system("cls");
		cout<<"\n\t\t\t\t\t\t\t\t\tThank you for using our program.";
	
	return 0;
}



