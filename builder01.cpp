#include<iostream>

using namespace std;

class Employee{
	
	public:
		
		
		int  id;
		char name[20];
		char role[20];
		int salary;
		int experience;  /// year
		char address[20];  /// enter the city
		char email[20];
		int contact;
		
		void setter(){
			
			cout<<"Enter the ID : ";
			cin>>id;
			cout<<endl;
			
			cout<<"Enter the NAME : ";
			cin>>name[20];
			cout<<endl;
			
			cout<<"Enter the ROLE : ";
			cin>>role[20];
			cout<<endl;
			
			cout<<"Enter the SALARY : ";
			cin>>salary;
			cout<<endl;
			
			cout<<"Enter the EXPERIENCE : ";
			cin>>experience;
			cout<<endl;
			
			cout<<"Enter the ADDRESS : ";
			cin>>address[20];
			cout<<endl;
			
			cout<<"Enter the EMAIL : ";
			cin>>email[20];
			cout<<endl;
			
			cout<<"Enter the CONTACT : ";
			cin>>contact;
		}
		
		void getter(){
			
			cout<<"Employee id : "<<id<<endl;
			cout<<"Employee name : "<<name[20]<<endl;
			cout<<"Employee role : "<<role[20]<<endl;
			cout<<"Employee salary : "<<salary<<endl;
			cout<<"Employee experience : "<<experience<<endl;
			cout<<"Employee address : "<<address[20]<<endl;
			cout<<"Employee email : "<<email[20]<<endl;
			cout<<"Employee contact : "<<contact;
		}
};

main(){
	
	Employee obj;
	
	obj.setter();
	obj.getter();
	cout<<endl;
	
	obj.setter();
	obj.getter();
	cout<<endl;
	
	obj.setter();
	obj.getter();
	cout<<endl;
	
	obj.setter();
	obj.getter();
	cout<<endl;
	
	obj.setter();
	obj.getter();
}
