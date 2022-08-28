#include<iostream>

using namespace std;

class Railway{
	
	public:
		int a;
		
		void Train(){
			
		cout<<"Enter your TRAIN Number(train route 101,102,103)  : ";
		cin>>a;
		
		cout<<endl;
		
		cout<<"---------------------------------------------------------"<<endl;
		
		switch(a){
			
			case 101:
				cout<<"		You are train route is : 101"<<endl;
				cout<<"-------------------------------------------------------"<<endl;
				cout<<"		Train  Name : Ak Tejas Raj Ex"<<endl;
				cout<<"		Source      : Delhi"<<endl;
				cout<<"		Destination : Mumbai"<<endl;
				cout<<"		Train Time  : 5:15 PM";
				break;
				
			case 102:
				cout<<"		You are train route is : 102"<<endl;
				cout<<"--------------------------------------------------------"<<endl;
				cout<<"		Train  Name : Hwh Adi Suf Exp"<<endl;
				cout<<"		Source      : Pune"<<endl;
				cout<<"		Destination : Ahmedabad"<<endl;
				cout<<"		Train Time  : 11:45 PM";
				break;
			
			case 103:
				cout<<"		You are train route is : 103"<<endl;
				cout<<"---------------------------------------------------------"<<endl;
				cout<<"		Train  Name : Aii Sdah Exp"<<endl;
				cout<<"		Source      : Jaipur"<<endl;
				cout<<"		Destination : Surat"<<endl;
				cout<<"		Train Time  : 02:45 AM";
				break;
			
		    default:
			    cout<<"Error";
				break;	
		}
	}
};

main(){
	
	Railway obj;
	
	obj.Train();
}
