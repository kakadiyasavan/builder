#include<iostream>

using namespace std;

class Students{
	
	public:
		
		 int id;
		 char name[20];
		 char subject[20];   
		 int rollno; 
		 
};

main(){
	
	Students obj[1000];
	int a,b,c;
	
	cout<<"Enter the Number : ";
	cin>>c;
	
	for(a=0;a<=c;a++){
		cout<<"Enter students ID : ";
		cin>>obj[a].id;
		
		cout<<"Enter students Name : ";
		cin>>obj[a].name[20];
		
		cout<<"Enter students Subject : ";
		cin>>obj[a].subject[20];
		
		cout<<"Enter students rollno : ";
		cin>>obj[a].rollno;
		
	}
	
	for(a=0;a<=c;a++){
		
		cout<<endl<<"students ID : "<<obj[a].id<<endl;
		cout<<endl<<"students NAME : "<<obj[a].name[20]<<endl;
		cout<<endl<<"students subject : "<<obj[a].subject[20]<<endl;
		cout<<endl<<"students rollno : "<<obj[a].rollno;
	}
}
