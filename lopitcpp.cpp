///4:58 pm 28/11/2023
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int answer, currentday, currentMonth, currentyear, bmonth, bday, byear, current, birthdate, age, minrange = 100000, maxrange = 999999, accno, pin, password,password2, password3, password4, password5, password6;
	string name, address, gender,acctype, birthday;
	double inidepo, deposit,balance, withdraw;
	char answer2,answer3,answer4,answer5,answer6;
double withdraw_money(double withdrawamount);
double deposit_money(double depo);
void design();
void design2();
double deleteacc();
int main(int argc, char** argv) {
do {
	design();
	cout<<"\t  1. Open a new account\n\t  2. Balance Inquiry\n\t  3. Deposit\n\t  4. Withdraw\n\t  5. View Account Information\n\t  6. Close Account\n\t  7. Exit Program\n";
	cout<<"\t  Choose an option [1-7]: ";
	cin>>answer;
	switch(answer){	
	case 1: 

	system("cls");
	do {
	design();
	cout<<"\t\tNew account";
	
		cout<<"\n\nEnter full name[FN, LN, MN]: \t";
	cin.ignore();
	getline(cin, name);
	cout<<"Address: \t\t\t";
	getline(cin, address);
	design2();
	
    cout << "\t\tCurrent Date\n\n";
    cout << "Enter month today[1 - 12]: \t";
    cin >> currentMonth;
    while (currentMonth > 12 || currentMonth <= 0) { //checks if input is a valid month
        cout << "Invalid month, enter again: \t";
        cin >> currentMonth;
    }
    if (currentMonth == 2) { //checks if month is february to limit the days to 28
        cout << "Enter a day today[1 - 28]: \t";
        cin >> currentday;

        while (currentday > 28 || currentday <= 0) { // checks if day is valid (within 1-28)
            cout << "Invalid day, enter again: \t";
            cin >> currentday;
        }
    } else if (currentMonth == 4 && 6 && 9 && 11) { // months that has only 30 days
        cout << "Enter day today[1 - 30]: \t";
        cin >> currentday;

        while (currentday > 30 || currentday <= 0) { // checks if day is valid (within 1-30)
            cout << "Invalid day, enter again: \t";
            cin >> currentday;
        }
    } else { // every other month that has 31 days
        cout << "Enter a day today[1 - 31]: \t";
        cin >> currentday;

        while (currentday > 31 || currentday <= 0) { // checks if day is valid (within 1-31)
            cout << "Invalid day, enter again: \t";
            cin >> currentday;
        }
    }

    cout << "Enter current year: \t\t";
    cin >> currentyear;
	        
	cout << "Current date = \t\t\t" << currentMonth << "/" << currentday <<  "/" << currentyear<<endl;
	
		design2();
		
	cout << "\t\tBirth Date:\n\n";
    cout << "Enter birth month[1 - 12]: \t";
    cin >> bmonth;
    while (bmonth > 12 || bmonth <= 0) { //checks if month is valid
        cout << "Invalid month, enter again: \t";
        cin >> bmonth;
    }
    if (bmonth == 2) { // checks if month is feb
        cout << "Enter a birth day[1 - 28]: \t";
        cin >> bday;

        while (bday > 28 || bday <= 0) { // checks if day is valid if month is feb
            cout << "Invalid day, enter again: \t";
            cin >> bday;
        }
    } else if (bmonth == 4 && 6 && 9 && 11) { // months with 30 days
        cout << "Enter birth date[1 - 30]: \t";
        cin >> bday;

        while (bday > 30 || bday <= 0) { //checks if day is valid 
            cout << "Invalid day, enter again: \t";
            cin >> bday;
        }
    } else { // every other month with 31 days
        cout << "Enter a birth day[1 - 31]: \t";
        cin >> bday;

        while (bday > 31 || bday <= 0) { // check if day is valid
            cout << "Invalid day, enter again: \t";
            cin >> bday;
        }
    }
    
    cout << "Enter birth year: \t\t";
    cin >> byear;
	        
	cout <<"Birthday = \t\t\t" << bmonth << "/" << bday <<  "/" << byear<<endl;

		
		age = currentyear - byear; //subtracts the current year to birthyear to get the age
		if (currentMonth < bmonth || currentMonth == bmonth && currentday < bday) { //checks if current month is before the birthmonth or 
		}                                                                        // if current month is same with birthmonth but currentday 
                                                                        // is before bday, it will subtract 1 from age. telling that the birthday
                                                                        //this year has not happened yet
		
		if (age >= 18) {  //if age is 18 or above, it will proceed to this part
	    design2();
	    cout<<"\t\tGender\n";
			cout<<"\nGender[M or F]: \t\t";
			cin>>gender;
			while (gender != "M" && gender != "m" && gender!= "F" && gender != "f") { // loops the question until answer is M/m or F/f
			system("cls");
			cout<<"\n\nInvalid Gender, choose M or F only: \t";
			cin>>gender;		
			}
			
			if (gender == "M" || gender == "m") { // return  male if chosen M
				gender = "Male";
				cout<<"Gender is \t\t\t"<<gender<<endl;
			}
				else if (gender == "F" || gender == "f") { // return female if chosen F
				gender = "Female";
				cout<<"Gender is \t\t\t"<<gender<<endl;
			}	
				design2();
     	cout<<"\t\tAccount Type\n";
		    cout<<"\n[S]Savings or [C] Current: \t";
		    cin>>acctype;
		while(acctype!= "S" && acctype!= "s" && acctype!= "C" &&  acctype!= "c") { // loops question until answer is S/s or C/c
			cout<<"Invalid, [S] or [C] only: \t";
		    cin>>acctype;
		}
		
		if (acctype == "S"|| acctype == "s") { // return savings if chosen S 
			acctype = "Savings";
			cout<<"Account type:  \t\t\t"<<acctype<<" account"<<endl;
			design2();
     	cout<<"\t\tInitial Deposit\n";
			cout<<"\nMinimum of 5000: \t\t";
				cin>>inidepo;
				deposit_money(inidepo);
		
			while (inidepo < 5000) {
				cout<<"Deposit not enough, reenter:\t";
				cin>>inidepo;
			 
			}
		}
		else if (acctype == "C" || acctype == "c") {
			acctype = "Current";
			cout<<"\nAccount type is "<<acctype<<" account"<<endl;
			 design2();
     	cout<<"\tInitial Deposit\n";
				cout<<"\nMinimum of 10000: \t\t";
				cin>>inidepo;
				cout<<endl;
			while (inidepo < 10000) {
				cout<<"Initial deposit is not sufficient, reenter: ";
				cin>>inidepo;
			}		
		}
		design2();
		cout<<"\t\tPin & Confirmation\n";
            	cout<<"Enter PIN(6 digits only):\t";
            	cin>>pin;
            	while (pin < 100000 || pin > 999999) {
            		cout<<"\nEnter a 6 digit number only:\t";
            		cin>>pin;
				}
			 
			 cout<<"Confirm account creation?[Y/N]:\t";
			 cin>>answer6;
			 if (answer6 == 'Y'|| answer6 =='y') {
			 		cout<<"\n\tAccount Successfully Created!\n";
			    srand(time(0));
				for (int i=0; i<1; i++) {
					cout<<"\nAccount number:\t\t\t"<<rand()<<""<<endl;		
				}
			 }	
		}	
			else {
			system("cls");
			cout<<"\nYou are too young to open an account.\n\n";
		}	
	getline(cin, address);
	}
	while (answer6 != 'Y' && answer6 != 'y');

	break;
	
	case 2: 
	system("cls");
	design();
	cout<<"Balance Inquiry\n";
	if (inidepo > 0) {
		cout<<"Enter password: ";
		cin >>password;
	
	while (password != pin) {
		cout<<"Wrong password, enter again: ";
		cin >>password;	
	}
		cout<<"Balance: "<<balance<<endl;	  
	}
	else {
		cout<<"Create an account first.";
	}
	break;
	
	
	//option 3
	case 3: 
	system("cls");
	design();
	
	cout<<"Deposit\n";
	if (inidepo > 0) {
		cout<<"Enter PIN: ";
		cin>>password2;
		while (pin != password2 ) {
		cout<<"\nWrong password, enter again: ";
		cin>>password2;
	}
		do {
	cout<<"\nHow much do you want to deposit?: ";
	cin>>deposit;
	if (acctype == "Savings") {
		while (deposit < 300 || deposit < 0) {
			cout<<"Entered amount is not valid, try again: ";
			cin>>deposit;
		}
	}
	if (acctype == "Current") {
		while (deposit < 500 || deposit < 0) {
			cout<<"Entered amount is not valid, try again: ";
			cin>>deposit;
		}
	}
		cout<<"Confirm deposit of "<<deposit<<" ?(Y/N): ";
	cin>>answer2;
	if (answer2 == 'Y' || answer2 =='y') {
			cout<<"Successfully deposited "<<deposit;
			deposit_money(deposit);
			cout<<"\nNew Balance: "<<balance;
	}
}
while (answer2 != 'Y' && answer2 != 'y');
	}
	else {
		cout<<"Create an account first.";
	}
	break;
	
	
	// option number 4
	case 4: 
	system("cls");
	design();
	cout<<"Withdraw\n";
	if (inidepo <= 0) {
	cout<<"Create an account first.";	
	}
	else {
		cout<<"Enter PIN: ";
		cin>>password3;	
		while (pin!= password3) {
		   cout<<"Wrong password, enter again: ";
		   cin>>password3;	
		}
		do {
		cout<<"\nHow much do you want to withdraw?: ";
	    cin>>withdraw;
	    while (withdraw <= 0 || withdraw > balance) {
		cout<<"\nInvalid amount, try again: ";
		cin>>withdraw;
 	           		                                        }
 	    cout<<"\nConfirm withdrawal of "<<withdraw<<" ?";
 	    cin>>answer3;
 	    
 	    if (answer3 == 'Y' || answer3 == 'Y' ) {
 	          system("cls");
 	          	design();
 	    	    cout<<"\nSuccessfully withdrew "<<withdraw;
 	    	    withdraw_money(withdraw);
 	    	    cout<<"\nNew balance is: "<<balance;
 	    	    
		 }
		}
		while (answer3 =='N' || answer3 == 'n');
	    }
	    
    break;	
	
	//option number 5
	case 5: 
	system("cls");
		design();
		cout<<"Account Information\n";
	    if (inidepo > 0) {
	    		cout<<"\nEnter PIN: ";
	    		cin>>password4;
	    		do {
	    		cout<<"\nWrong password, enter again: ";
	    		cin>>password4;	
				}
				while (password4 != pin);
	    		
	cout<<"\nFull Name: "<<name;
	cout<<"\nBirthday: "<<bday<<"/"<<bmonth<<"/"<<byear;
	cout<<"\nGender: "<<gender;
	cout<<"\nAccount Type: "<<acctype;
	cout<<"\nInitial Deposit: "<<inidepo;
	cout<<"\nCurrent Balance: "<<balance;
		}
		else {
	cout<<"Create an account first.\n\n";
		}
	
	break;
	
	//option number 6
	case 6: 
	system("cls");
	design();
	cout<<"Account Closure\n";
	if (inidepo > 0) {
		cout<<"Enter PIN: ";
	cin>>password5;
	
	do {
	cout<<"Wrong password, enter again: ";
	cin>>password5;
	}
	while(password5 != pin);
	
	
	cout<<"Do you really want to close the account?(Y/N): ";
	cin>>answer4;
	if (answer4 == 'Y' || answer4 == 'y') {
		deleteacc();
			cout<<"The account is now closed.";
	}
	
	}
	else {
		cout<<"Create an account first: ";
	}
	
	while (answer4 =='N');
	break;
	
	case 7: 
	cout<<"\nDo you really want to end the program? (Y/N): ";
	cin>>answer5;
	break;

	}
}
while (answer5 != 'Y' && answer5!= 'y');
        system("cls");
		cout<<"\nThank you for using our !LOPIT Online Banking.\n";
		cout<<"\nMariño, Carl Jerome N.";
		cout<<"\nMark Gamboa";
		cout<<"\nRonn Rosarito";
	    cout<<"\nDominic Madlangbayan";
	
	
	
	return 0;
}

double deposit_money(double depo) {
    balance += depo;
	return balance;
}

double withdraw_money(double withdrawamount) {
	 balance -= withdrawamount;
	 return balance;
}

double deleteacc() {
	return inidepo = 0;
	return balance = 0;
}

void design(){
	cout<<"\n--------------------------------------------\n";
	cout<<"\t     Bank of !LOPIT";
	cout<<"\n--------------------------------------------\n";
}
void design2(){
	cout<<"\n--------------------------------------------\n";

}
