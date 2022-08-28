#include<iostream>

using namespace std;

class Supermarket{
	
	public:
		int a;
		int b;
		int c;
		char d[20];
		int e;
		int f;
		int g;
		
		void Billing(){
			
		cout<<"Enter your Id(101,102,103)  : ";
		cin>>a;
		cout<<endl;
		
		cout<<"Enter the Password : ";
		cin>>b;
		cout<<endl;
		
		cout<<"Enter Item Number : ";
		cin>>c;
		cout<<endl;
		
		cout<<"Enter Item Name : ";
		cin>>d[20];
		cout<<endl;
		
		cout<<"Quantity : ";
		cin>>e;
		cout<<endl;
		
		cout<<"Tex : ";
		cin>>f;
		cout<<endl;
		
		cout<<"Discount : ";
		cin>>g;
		
		cout<<endl;
		
		cout<<"---------------------------------------------------------"<<endl;
		
		switch(a){
			
			case 101:
				cout<<"		You are ID       : 101"<<endl;
				cout<<"     You are Password : "<<b<<endl;
				cout<<"-------------------------------------------------------"<<endl;
				cout<<"		Item Number : "<<c<<endl;
				cout<<"		Item Name   : "<<d[20]<<endl;
				cout<<"		Quantity    : "<<e<<endl;
				cout<<"		Tex         : "<<f<<endl;
				cout<<"     Discount    : "<<g;
				break;
				
			case 102:
				cout<<"		You are ID       : 101"<<endl;
				cout<<"     You are Password : "<<b<<endl;
				cout<<"-------------------------------------------------------"<<endl;
				cout<<"		Item Number  : "<<c<<endl;
				cout<<"		Item Name    : "<<d[20]<<endl;
				cout<<"		Quantity     : "<<e<<endl;
				cout<<"		Tex          : "<<f<<endl;
				cout<<"     Discount     : "<<g;
				break;
			
			case 103:
				cout<<"		You are ID       : 101"<<endl;
				cout<<"     You are Password : "<<b<<endl;
				cout<<"-------------------------------------------------------"<<endl;
				cout<<"		Item Number   : "<<c<<endl;
				cout<<"		Item Name     : "<<d[20]<<endl;
				cout<<"		Quantity      : "<<e<<endl;
				cout<<"		Tex           : "<<f<<endl;
				cout<<"     Discount      : "<<g;
				break;
			
		    default:
			    cout<<"Error";
				break;	
		}
	}
};

main(){
	
	Supermarket obj;
	
	obj.Billing();
}
