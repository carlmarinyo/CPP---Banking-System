#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int answer, day, month, year, bmonth, bday, byear, current, birthdate, age;
	string name, address, gender, acctype;
	double inidepo;
	 
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
	cout<<"\n\t\t\t\t\t\t\t\t\tCurrent Date\n";
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
	
	cout<<"\n\n\t\t\t\t\t\t\t\t\tBirth Date\n";
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
			do {
			cout<<"\n\n\t\t\t\t\t\t\t\tGender(M or F): ";
			cin>>gender;		
			}
			while (gender != "M" && gender != "m" && gender!= "F" && gender != "f");
			if (gender == "M" || gender == "m") {
				gender = "Male";
				cout<<"\t\t\t\t\t\t\t\tGender is "<<gender;
			}
				else if (gender == "F" || gender == "f") {
				gender = "Female";
				cout<<"\t\t\t\t\t\t\t\tGender is "<<gender;
			}		
		}
		else {
			system("cls");
			cout<<"\n\t\t\t\t\t\t\t\tYou are too young to open an account.\n\n";
		}
		cout<<"\n\t\t\t\t\t\t\t\tAccount Type(S for Savings, C for Current): ";
		    cin>>acctype;
		do {
			cout<<"\n\t\t\t\t\t\t\t\tInvalid account type, choose from Savings(S) and Current(C) only: ";
		    cin>>acctype;	
		}
		while(acctype!= "S" && acctype!= "s" && acctype!= "C" &&  acctype!= "c");
		if (acctype == "S" || acctype == "s") {
			acctype = "Savings";
			cout<<"\t\t\t\t\t\t\t\tAccount type is "<<acctype<<" account";
			cout<<"\n\t\t\t\t\t\t\t\Initial Deposit(SA 5000): ";
				cin>>inidepo;
			do {
				cout<<"\t\t\t\t\t\t\t\tInitial deposit is not sufficient, enter initial deposit again: ";
				cin>>inidepo;
			}
			while (inidepo < 5000);
			
		}
		else if (acctype == "C" || acctype == "c") {
			acctype = "Current";
			cout<<"\t\t\t\t\t\t\t\tAccount type is "<<acctype<<" account";
		
		}
		
		
		
		}
	
		}
	
		 }

	}
	getline(cin, address);
	
	
	break;
	case 2: 
	system("cls");
	cout<<"Balance Inquiry";
	break;
	case 3: 
	system("cls");
	cout<<"Deposit";
	break;
	case 4: 
	system("cls");
	cout<<"Withdraw";
	break;
	case 5: 
	system("cls");
	cout<<"View Account Information";
	break;
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




