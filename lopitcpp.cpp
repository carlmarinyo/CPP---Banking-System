///7:28 pm 28/11/2023
#include <iostream>
#include <iomanip>
#include <cmath>               // predefined functions
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
//----------------------------------------------------------------------------------------------------------------------------------
int answer, currentday, currentMonth, currentyear, bmonth, bday, byear, current, birthdate, age, minrange = 100000, maxrange = 999999, accno, pin, password,password2, password3, password4, password5, password6;
string name, address, gender,acctype, birthday;
double inidepo, deposit,balance, withdraw;                  // variables
char answer2,answer3,answer4,answer5,answer6;
// --------------------------------------------------------------------------------------------------------------------------------------------------	
double withdraw_money(double withdrawamount);
double deposit_money(double depo);
void design();                                    //functions
void design2();
double deleteacc();
//----------------------------------------------------------------------------------------------------------------------
int main(int argc, char** argv) {   // main function
do {
	design();
	cout<<"\t  1. Open a new account\n\t  2. Balance Inquiry\n\t  3. Deposit\n\t  4. Withdraw\n\t  5. View Account Information\n\t  6. Close Account\n\t  7. Exit Program\n";
	cout<<"\t  Choose an option [1-7]: ";
	cin>>answer;
	switch(answer){	
	case 1: 
	deleteacc(); // automatic removes balance when you press 1 on menu while already having an account
	system("cls");
	do {
	design();
	cout<<"\t\tNew account";
	cout<<"\n\nEnter full name[FN, LN, MN]: \t";
	cin.ignore();
	getline(cin, name);
	cout<<"Address: \t\t\t";
	cin.ignore();
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
	        
	cout << "Current date : \t\t\t" << currentMonth << "/" << currentday <<  "/" << currentyear<<endl;
	
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
	        
	cout <<"Birthday : \t\t\t" << bmonth << "/" << bday <<  "/" << byear<<endl;

		
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
				cout<<"Gender:    \t\t\t"<<gender<<endl;
			}
				else if (gender == "F" || gender == "f") { // return female if chosen F
				gender = "Female";
				cout<<"Gender:   \t\t\t"<<gender<<endl;
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
		
				while (inidepo < 5000) { //loops question until initial deposit is 5000 and above
				cout<<"Deposit not enough, reenter:\t";
				cin>>inidepo;	
			
				}
				if (inidepo >= 5000) {
					deposit_money(inidepo);
				}
				
		}
		
		else if (acctype == "C" || acctype == "c") { // returns current account if c is chosen
			acctype = "Current";
			cout<<"Account type:  \t\t\t"<<acctype<<" account"<<endl;
			 design2();
     	cout<<"\t\tInitial Deposit\n";
				cout<<"\nMinimum of 10000: \t\t";
				cin>>inidepo;
				
			while (inidepo < 10000) { // only accepts deposit if its 10000 or above
				cout<<"Deposit not enough, reenter:\t";
				cin>>inidepo;
				
			}	
			if (inidepo >= 10000) { // if deposit is 10000 or above, it adds it to the balance using function
					deposit_money(inidepo);
				}	
		}
		design2();
		cout<<"\t\tPin & Confirmation\n";
            	cout<<"\nEnter PIN(6 digits only):\t";
            	cin>>pin;
            	while (pin < 100000 || pin > 999999) { //accepts only 6 digit
            		cout<<"\nEnter a 6 digit number only:\t";
            		cin>>pin;
				}
			 
			 cout<<"Confirm account creation?[Y/N]:\t";
			 cin>>answer6;
			 if (answer6 == 'Y'|| answer6 =='y') { // if answer is yes then it proceeds below
			 		cout<<"\n\tAccount Successfully Created!\n";
			    srand(time(0));                //  random number generator for account number
				for (int i=0; i<1; i++) {      //  
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
	while (answer6 != 'Y' && answer6 != 'y'); // loops whole account creation if answer in confirmation is not yes

	break;
	
	//option 2 -------------------------------------------------------------------------------------------------------------------------------------
	case 2: 
	system("cls");
	design();
	cout<<"\t     Balance Inquiry\n";
	if (inidepo > 0) { // checks if there is initial deposit to know if there is an account created
		cout<<"\nEnter password: \t\t";
		cin >>password;
	
	while (password != pin) {  // checks if the inputted password is same as the pin
		cout<<"Wrong password, enter again: \t";
		cin >>password;	
	}
	system("cls");
	design();
		cout<<"Balance: \t\t\t"<<balance<<endl;	  
	}
	else {
		cout<<"\tCreate an account first.";
	}
	break;
	
	
	//option 3 -----------------------------------------------------------------------------------------------------------------------------------
	case 3: 
	system("cls");
	design();
	
	cout<<"\t\tDeposit\n";
	if (inidepo > 0) {  // checks if there is initial deposit to know if there is an account created
		cout<<"Enter PIN: \t\t\t";
		cin>>password2;
		while (pin != password2 ) { // checks if inputted password is same with pin
		cout<<"\nWrong password, enter again: \t";
		cin>>password2;
	}
		do {
	system("cls");
	design();		
	cout<<"Deposit Amount: \t\t";
	cin>>deposit;
	if (acctype == "Savings") {
		while (deposit < 300 || deposit < 0) { // accepts only 300 and above if acctype is savings
			cout<<"Must be 300 or above: \t\t";
			cin>>deposit;
		}
	}
	if (acctype == "Current") {
		while (deposit < 500 || deposit < 0) { // accepts only 500 and above if acctype is current
			cout<<"Must be 500 or above: \t\t";
			cin>>deposit;
		}
	}
		cout<<"Confirm deposit of "<<deposit<<"?(Y/N):\t";
	cin>>answer2;
	if (answer2 == 'Y' || answer2 =='y') { // adds the deposit to balance using function
			cout<<"\n\tSuccessfully deposited\t"<<deposit<<endl;
			deposit_money(deposit);  
			cout<<"\nNew Balance:\t\t\t"<<balance;
	}
}
while (answer2 != 'Y' && answer2 != 'y');  // loops whole deposit when asnwer is not yes
	}
	else {
		cout<<"\tCreate an account first.";
	}
	break;
	
	
	//option 4 -----------------------------------------------------------------------------------------------------------------------------------
	case 4: 
	system("cls");
	design();
	cout<<"\t\tWithdraw\n";
	if (inidepo <= 0) { // checks if there is initial deposit to know if there is an account created
	cout<<"\tCreate an account first.";	
	}
	else {
		cout<<"Enter PIN:\t\t\t";
		cin>>password3;	
		while (pin!= password3) { // checks if input is same as pin
		   cout<<"Wrong password, enter again:\t";
		   cin>>password3;	
		}
		do {
		system("cls");
	    design();
		cout<<"Withdraw amount:\t\t";
	    cin>>withdraw;
	   	if (acctype == "Savings") {
		while (withdraw < 300 || withdraw < 0) {  // accepts only 300 and above if acctype is savings
			cout<<"Must be 300 or above: \t\t";
			cin>>withdraw;
		}
	}
	if (acctype == "Current") {
		while (withdraw < 500 || withdraw < 0) { // accepts only 500 and above if acctype is current
			cout<<"Must be 500 or above: \t\t";
			cin>>withdraw;
		}
	}	    

 	    cout<<"Confirm withdraw of "<<withdraw<<"?[Y/N]: ";
 	    cin>>answer3;
 
 	    if (answer3 == 'Y' || answer3 == 'y' ) { // withdraws money when answer is yes
 	       
 	    	    cout<<"\n\tSuccessfully withdrew "<<withdraw<<endl;
 	    	    withdraw_money(withdraw);
 	    	    cout<<"\nNew Balance:\t\t\t"<<balance;
 	    	    
		 }
		}
		while (answer3 =='N' || answer3 == 'n'); // loops whole withdraw part
	    }
	    
    break;	
	
	//option 5 -----------------------------------------------------------------------------------------------------------------------------------
	case 5: 
	system("cls");
		design();
		cout<<"\t     Account Information\n";
	    if (inidepo > 0) { // checks if there is initial deposit to know if there is an account created
	    		cout<<"\nEnter PIN:\t\t\t";
	    		cin>>password4;
	    		while (password4 != pin) { //checks if input is same with pin
	    		cout<<"\nWrong password, enter again: ";
	    		cin>>password4;		
				}
	    
				
				
	system("cls");
	design();	
	cout<<"Full Name:\t\t\t"<<name;
	cout<<"\nAddress:\t\t\t"<<address;
	cout<<"\nBirthday:\t\t\t"<<bday<<"/"<<bmonth<<"/"<<byear;
	cout<<"\nGender:\t\t\t\t"<<gender;
	cout<<"\nAccount Type:\t\t\t"<<acctype;
	cout<<"\nInitial Deposit:\t\t"<<inidepo;
	cout<<"\nCurrent Balance:\t\t"<<balance;
		}
		else {
	cout<<"\t  Create an account first.";
		}
	
	break;
	
	//option 6 -----------------------------------------------------------------------------------------------------------------------------------
	case 6: 
	system("cls");
	design();
	cout<<"\t     Account Closure\n";
	if (inidepo > 0) { // checks if there is initial deposit to know if there is an account created
	cout<<"\nEnter PIN:\t\t\t";
	cin>>password5;
	
	while(password5 != pin) { //checks if input is same with pin
	cout<<"Wrong password, enter again: ";
	cin>>password5;	
	}
	
	system("cls");
	design();
	cout<<"Do you really want to close the account?(Y/N): ";
	cin>>answer4;
	if (answer4 == 'Y' || answer4 == 'y') { // deletes account when answer is yes
		deleteacc();
			cout<<"\t   The account is now closed.";
	}
	
	}
	else {
		cout<<"\tCreate an account first ";
	}
	
	while (answer4 =='N' || answer4 == 'n'); // goes back to the menu when answer is no
	break;
	
	case 7: 
	cout<<"\nDo you really want to end the program? (Y/N): ";
	cin>>answer5;
	break;

	}
}
while (answer5 != 'Y' && answer5!= 'y'); // loops whole program when the answer is not yes
        system("cls");
		cout<<"\nThank you for using our !LOPIT Online Banking.\n";
		cout<<"\nMariño, Carl Jerome N.";
		cout<<"\nMark Gamboa";
		cout<<"\nRonn Rosarito";
	    cout<<"\nDominic Madlangbayan";
	return 0;
}

//functions-----------------------------------------------------------------------------------------------------------------------------------
double deposit_money(double depo) {
    balance += depo;    // used to add value in balance (deposit, initial deposit)
	return balance;
}

double withdraw_money(double withdrawamount) {
	 balance -= withdrawamount; // subtracts value in balance when withdrawing
	 return balance;
}

double deleteacc() {
	inidepo = 0;
	balance = 0;       // makes the initial depo value and balance to 0, making the 2-6 options unavailable since it requires an initial deposite
	return inidepo;    // of above 0, also used in account creation so that when you create an while already having an account, it removes the
	return balance;   // balance on the old account so that the new account starts from 0 instead of getting the balance on the old account
	
	
}

void design(){
	cout<<"\n--------------------------------------------\n";
	cout<<"\t     Bank of !LOPIT";
	cout<<"\n--------------------------------------------\n";   // for design, and to avoid repetition and manually typing this per section
}
void design2(){
	cout<<"\n--------------------------------------------\n";

}
