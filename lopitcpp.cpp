//4:30 am 27/11/2023
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
	
	
void design();
void design2();
void deleteacc(double inidepo, double balance);
int main(int argc, char** argv) {
do {
	design();
	cout<<"1. Open a new account\n2. Balance Inquiry\n3. Deposit\n4. Withdraw\n5. View Account Information\n6. Close Account\n7. Exit Program\n";
	cout<<"";
	cin>>answer;
	switch(answer){	
	case 1: 
	do {
	system("cls");
	design();
	cout<<"Opening new account";
	
		cout<<"\n\nEnter full name(FN, LN, MN): ";
	cin.ignore();
	getline(cin, name);
	cout<<"Address: ";
	getline(cin, address);
	design2();
	
    cout << "Current Date\n\n";
    cout << "Enter month today(1 - 12): ";
    cin >> currentMonth;
    while (currentMonth > 12) {
        cout << "INVALID Enter a month: ";
        cin >> currentMonth;
    }
    if (currentMonth == 2) {
        cout << "Enter a day today(1 - 28): ";
        cin >> currentday;

        while (currentday > 28) {
            cout << "INVALID Enter day: ";
            cin >> currentday;
        }
    } else if (currentMonth == 4 && 6 && 9 && 11) {
        cout << "Enter day today(1 - 30): ";
        cin >> currentday;

        while (currentday > 30) {
            cout << "INVALID Enter a day: ";
            cin >> currentday;
        }
    } else {
        cout << "Enter a day today(1 - 31): ";
        cin >> currentday;

        while (currentday > 31) {
            cout << "INVALID Enter a day: ";
            cin >> currentday;
        }
    }

    cout << "Enter current year: ";
    cin >> currentyear;
	        
	cout << "Current date = " << currentMonth << "/" << currentday <<  "/" << currentyear<<endl;
	
		design2();
		
	cout << "Birth Date:\n\n";
    cout << "Enter birth month(1 - 12): ";
    cin >> bmonth;
    while (bmonth > 12) {
        cout << "INVALID Enter a month: ";
        cin >> bmonth;
    }
    if (bmonth == 2) {
        cout << "Enter a birth day(1 - 28): ";
        cin >> bday;

        while (bday > 28) {
            cout << "INVALID Enter day: ";
            cin >> bday;
        }
    } else if (bmonth == 4 && 6 && 9 && 11) {
        cout << "Enter birth date(1 - 30): ";
        cin >> bday;

        while (bday > 30) {
            cout << "INVALID Enter a day: ";
            cin >> bday;
        }
    } else {
        cout << "Enter a birth day(1 - 31): ";
        cin >> bday;

        while (bday > 31) {
            cout << "INVALID Enter a day: ";
            cin >> bday;
        }
    }
    
    cout << "Enter birth year: ";
    cin >> byear;
	        
	cout <<"Birthday = " << bmonth << "/" << bday <<  "/" << byear<<endl;

		
		age = currentyear - byear;
		if (currentMonth < bmonth ||currentMonth == bmonth && currentday < bday) {
		age--;	
		}

		
		if (age >= 18) {
	    design2();
	    cout<<"Gender\n\n";
			cout<<"\nGender(M or F): ";
			cin>>gender;
			while (gender != "M" && gender != "m" && gender!= "F" && gender != "f") {
			system("cls");
			cout<<"\n\nInvalid Gender, choose M or F only: ";
			cin>>gender;		
			}
			
			if (gender == "M" || gender == "m") {
				gender = "Male";
				cout<<"Gender is "<<gender<<endl;
			}
				else if (gender == "F" || gender == "f") {
				gender = "Female";
				cout<<"Gender is "<<gender<<endl;
			}	
				design2();
     	cout<<"Account Type\n";
		    cout<<"\nAccount Type(S for Savings, C for Current): ";
		    cin>>acctype;
		while(acctype!= "S" && acctype!= "s" && acctype!= "C" &&  acctype!= "c") {
			cout<<"\nInvalid account type, choose from Savings(S) and Current(C) only: ";
		    cin>>acctype;
		}
		
		if (acctype == "S"|| acctype == "s") {
			acctype = "Savings";
			cout<<"Account type is "<<acctype<<" account"<<endl;
			design2();
     	cout<<"\nInitial Deposit\n";
			cout<<"\nInitial Deposit(Minimum of 5000): ";
				cin>>inidepo;
				balance += inidepo;
		
			while (inidepo < 5000) {
				cout<<"\n\nInitial deposit is not sufficient, reenter: ";
				cin>>inidepo;
				balance += inidepo;
			}
		}
		else if (acctype == "C" || acctype == "c") {
			acctype = "Current";
			cout<<"\nAccount type is "<<acctype<<" account"<<endl;
			 design2();
     	cout<<"Initial Deposit\n";
				cout<<"\n\nInitial Deposit(Minimum of 10000): ";
				cin>>inidepo;
				cout<<endl;
			while (inidepo < 10000) {
				cout<<"Initial deposit is not sufficient, reenter: ";
				cin>>inidepo;
			}		
		}
		design2();
		
            	cout<<"\nEnter PIN(6 digits only): ";
            	cin>>pin;
            	while (pin < 100000 || pin > 999999) {
            		cout<<"\nEnter a 6 digit number only: ";
            		cin>>pin;
				}
			 
			 cout<<"Confirm account creation [Y/N]";
			 cin>>answer6;
			 if (answer6 == 'Y'|| answer6 =='y') {
			 		cout<<"\nAccount Successfully Created!";
			    srand(time(0));
				for (int i=0; i<1; i++) {
					cout<<"\nAccount number: "<<rand()<<""<<endl;		
				}
			 }	
		}	
			else {
			system("cls");
			cout<<"\nYou are too young to open an account.\n\n";
		}	
	getline(cin, address);
	}
	while (answer6 != 'Y');
		
	
 
	
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
		cout<<"Confirm deposit of "<<deposit<<" ?(Y/N)";
	cin>>answer2;
	if (answer2 == 'Y' || answer2 =='y') {
			cout<<"Successfully deposited "<<deposit;
			balance += deposit;
			cout<<"\nNew Balance: "<<balance;
	}
}

while (answer2 != 'Y' || answer2 == 'y');
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
 	    	    balance -= withdraw;
 	    	    cout<<"\nNew Balance:  "<<balance;
		 }
		}
		while (answer3 =='N' || answer3 == 'n');
	    }
	    
    break;	
	
	//option number 5
	case 5: 
	system("cls");
		design();
	    if (inidepo > 0) {
	    		cout<<"Account Information\n";
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
	cout<<"No account found.\n\n";
		}
	
	break;
	
	//option number 6
	case 6: 
	system("cls");
	design();
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
	if (answer4 == 'Y') {
		deleteacc(inidepo,balance);
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


void deleteacc(double, double) {
	inidepo = 0;
	balance = 0;
	cout<<"The account is now closed.";
}
void design(){
	cout<<"\n------------------------------------\n";
	cout<<"\t!LOPIT  SYSTEM";
	cout<<"\n------------------------------------\n";
}
void design2(){
	cout<<"\n------------------------------------\n";

}
