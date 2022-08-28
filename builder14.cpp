#include<iostream>

using namespace std;

class user{
	
	public:
		
		int a,c,d,f;
		char b;
		char e;
		
		void fun(){
			
			cout<<"     -:   BANK MANAGMENT SYSTEM   :-      "<<endl;
			cout<<"-------------------------------------------"<<endl;
			cout<<"     -:   Designed N Programes By  :-     "<<endl;
			cout<<"-------------------------------------------"<<endl;
			cout<<"          Mayank A Italiya                 "<<endl;
			cout<<endl;
			
			cout<<"            -:    Trainer    :-            "<<endl;
			cout<<"-------------------------------------------"<<endl;
			cout<<"               Ashit Mavani                "<<endl;
			cout<<endl;
			
			cout<<"    Press Any Key N Enter To Continue...   "<<endl;
			cout<<endl;
			
			cout<<"---------------------------------------------------------------------"<<endl;
			cout<<"  -: Press 1 to Log in As Aministrator Or 2 to Log in as STAFF  :-   "<<endl;
			cout<<"---------------------------------------------------------------------"<<endl;
			cin>>a;
			
			switch(a){
				
				case 1:
					cout<<"NO Service plase  Enter STAFF";
					break;
					
				case 2:
					cout<<"------------------------------------------------------------"<<endl;
					cout<<"        -:    Welcome As STAFF     :-             "<<endl;
					cout<<"------------------------------------------------------------"<<endl;
					cout<<endl<<endl;
					
					cout<<"Enter Name STAFF          : ";
					cin>>b;
					cout<<"Enter Account Number      : ";
					cin>>c;
					cout<<"Enter Phone Number        : ";
					cin>>d;
					cout<<"Enter E-mail              : ";
					cin>>e;
					cout<<endl<<endl;
					
					cout<<"------------------------------------------------------------"<<endl;
					cout<<"Name           : "<<b<<endl;
					cout<<"Account No     : "<<c<<endl;
					cout<<"Phone No       : "<<d<<endl;
					cout<<"E-mail         : "<<e<<endl;
					cout<<"------------------------------------------------------------"<<endl;
					cout<<endl<<endl;
					
					cout<<"Press [z] to deposite the money :";
					cin>>f;
					cout<<endl<<endl;
					
					cout<<"------------------------------------------------------------"<<endl;
					cout<<"      Withdraw the Money  :  20,000                         "<<endl;
					cout<<"------------------------------------------------------------"<<endl;
					cout<<endl;
					
					cout<<"      Your Actual Amount is : 2,00,000                      "<<endl;
					cout<<"      Congrates Your Amount Has Withdraw Successfully...    "<<endl;
					cout<<"      Your Account Balance is  : 1,80,000   				   ";
			}
		}
};
main(){
	user obj;
	
	obj.fun();
}
