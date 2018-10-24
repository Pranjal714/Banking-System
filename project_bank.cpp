
//Bank_ATM_System

#include<iostream>
#include<conio.h>
#include<process.h>  //exit.
#include<stdlib.h>

using namespace std;
class bank{
	private:
		string lastname;
		char username[20];
		int age;
		char father[20];
		string mother;
		int deposit;
		int withdrawal;
		int totalAmnt;
		int balanceLeft;
		int pin; 
		int i;
		int go;
		int bnk;
		int depAmnt;
		int widAmnt;
		int newPin;
		int totalAmount;
		int oldPin;
		int dip;
		int wit;
		int ckb;
		int ent;
		
		
		public:
			void intro(){
				cout<<"\n\t\t\t\tBank-Of-Asia";
				cout<<"\n\n To Proceed further , Press 'ENTER'" ; getchar();
			}
			void first_page(){
				cout<<endl;
				cout<<"\t\t\t~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"\t\t\t~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"\t\t\tWelcome to Bank Of Asia !!!"<<endl;
				cout<<"\t\t\t~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"\t\t\t~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			    cout<<endl<<endl<<endl;
			}
			//user interface down
			void second_page(){
				
		a:		cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		        cout<<"\n Please select the option below ->"<<endl<<endl; 
				cout<<" 1.Register for your Account\t\t\t\t 2.Banking"<<endl;
				cout<<" 3.Support and Help\t\t\t\t\t 4.Exit\n";
				 cin>>i;
				switch(i)
				{
					case 1:
						user_details();
						break;
					case 2:
					     user_banking();
						 break;
					case 3:
						cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
					    cout<<"  Hello User, We are here to help you!"<<endl<<endl;
						cout<<" If you have any problem or complain regarding your money deposit, \n money withdrawal";
						cout<<" or any other problem related to banking ,\n";
						cout<<" you can register your complaint on 09876123412 or visit 'www.asianbank.org'\n";
						cout<<" or you can visit your nearest asian bank, \n Thank you\n";
						cout<<"\n\n To go back to Home page , press 1"; cin>>go;
						if(go==1){
							cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
							goto a;
						}
						break;
					case 4:
						cout<<"\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
					    cout<<"\n\t\t\t@@@@@@@@ Thank You For Visiting @@@@@@@@";
						cout<<"\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";	
						exit(0);
				}
				
			}
			void user_details(){
				cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
				cout<<"\n Enter User's First name:"; cin>>username;
				cout<<"\n Enter User's Last name:"; cin>>lastname;
				cout<<"\n Enter User's age:"; cin>>age;
				if(age<18){
					cout<<"\n\n==========================================================================";
					cout<<"\n\n Sorry! You are not eligible ."<<endl;
					cout<<"\n Eligibility Condition: The User must have atleast 18 years of age inorder to    open the account in our bank."<<endl;
					cout<<"\n Thank You for your Visit!\n";
					exit(0);
				}
				cout<<"\n Enter User's Father's Fist name: Mr."; cin>>father;
				cout<<"\n Enter User's Mother's First name: Mrs."; cin>>mother;
				//cout<<"\n Enter pin:"; cin>>pin;
				//cout<<"\n\n Press Enter to register yourself->"; getchar(); 
				show_user();
			}
			void show_user(){
			    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
				cout<<"\n\n Welcome "<<username<<"!"<<endl<<endl;
				cout<<"\nYou're successfully registered!!!"<<endl<<endl;
			//	cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~";
				cout<<"\n Your Entered Details are:"<<endl;
				cout<<" Name:"<<username<<""<<lastname;
				cout<<"\n Age:"<<age;
				cout<<"\n Father's name: Mr."<<father;
				cout<<"\n Mother's name: Mrs."<<mother;
				 new_pin();
				/*cout<<"\n\n  Go back to Home page , press 1"; cin>>go;
						if(go==1){
							cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
							second_page();
						}*/
				
			}
			void user_banking(){
				cout<<"\n\nIf You have not registered yourself (press 1) or (press 2) to continue..."; cin>>ent;
				if(ent==1){
					second_page();
				}
				else if(ent==2){
					goto l;
				}
				
			l:	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
				cout<<"\n 1.Deposit Money\t\t2.Withdraw money";
				cout<<"\n 3.Check Balance\t\t4.Reset Pin"<<endl;
				cin>>bnk;
				switch(bnk){
					case 1:
				m:		cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
				        cout<<"\n\n\t\t ~~~Money Deposition~~~\n\n";
						cout<<"\n Enter your pin : "; cin>>pin;
						if(pin==newPin){
						
						cout<<" \nEnter your Amount to be deposited here: Rs."; cin>>depAmnt;
						cout<<"\n\n You Deposited : Rs."<<depAmnt<<"/-"<<endl;
						cout<<"-----------------------------------------------"<<endl;
						
						totalAmount+=depAmnt;
						cout<<"\n Your Total Balance is : Rs."<<totalAmount<<" ."<<endl;
						cout<<"\n\n To Exit press 1 or \n Press 2 to go to other banking options. : "; cin>>dip;
						if(dip==1){
							exit(0);
						}
						else{
							goto l;
						}
					}
						else {
							cout<<"Sorry ! you entered wrong pin.\n";
							goto m;
						}
						break;
					
						
					case 2:
					n:	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
					    cout<<"\n\n\t\t ~~~Money Withdrawal~~~\n\n";
						cout<<"\n Enter your pin : "; cin>>pin;
						if(pin==newPin){
						
						cout<<" \nEnter your Amount to withdraw here: Rs."; cin>>widAmnt;
						cout<<"\n\n Money Withdrawn : Rs."<<widAmnt<<"/-"<<endl;
						cout<<"------------------------------------------------"<<endl;
						
						totalAmount-=widAmnt;
						cout<<"\n Your Total Balanace is : Rs."<<totalAmount<<" ."<<endl;
							cout<<"\n\n To Exit press 1 or \n Press 2 to go to other banking options. : "; cin>>wit;
						if(wit==1){
							exit(0);
						}
						else{
							goto l;
						}
					}
					else{
						cout<<"Sorry ! you entered wrong pin.\n";
							goto n;
					}
						break;
						
					case 3:
						cout<<"Your Total Balance is : Rs."<<totalAmount<<endl;
							cout<<"\n\n To Exit press 1 or \n Press 2 to go to other banking options. : "; cin>>ckb;
						if(ckb==1){
							exit(0);
						}
						else{
							goto l;
						}
						break;
						
					case 4:
						reset_pin();
				}
				
			}
			void new_pin(){
				cout<<"\n\n **** Enter your New Pin(4-digit) : "; cin>>newPin;
				cout<<"\n\n Pin Setted Successfully\n\n";
				cout<<"\n\n  Go back to Home page , press 1"; cin>>go;
						if(go==1){
							cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
							second_page();
						}
				
			}
			void reset_pin()
			{   
			t:  cout<<"\n Enter your old pin(4-digit) : "; cin>>oldPin;
			    if(oldPin==newPin){
			    	new_pin();
			    		//cout<<"Enter Your New Pin : "; cin>>pin;
				cout<<"\n\nPin setted successfully.."<<endl;
				}
				else{
					cout<<"\n You entered wrong pin!"<<endl;
					cout<<"\n Try Again..."<<endl;
					goto t;
				}
			
			}
};
int main(){
	bank obj;
	obj.intro();
	obj.first_page();
	obj.second_page();
	//obj.user_details();
	//obj.show_user();
	obj.user_banking();
//	obj.new_pin();
//	obj.reset_pin();
	return(0);
}
