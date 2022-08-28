#include<iostream>

using namespace std;
	
class Highschool{

	   
	public :
		
	 /*  int  id;
	   char name[20]; 
	   int  rollno;
	   int  std;
	   int age;
	   int contact;
	   char edu_insti[20];  
	   char address[20];*/
	   
	void setter(){
		
		int  id;
	   char name; 
	   int  rollno;
	   int  std;
	   int age;
	   int contact;
	   char edu_insti;  
	   char address;
	   
	     cout<<"enter id :";
	     cin>>id;
	     
	     cout<<"enter name :";
	     cin>>name;
	     
	     cout<<"enter rollno :";
	     cin>>rollno;
	     
	     cout<<"enter std :";
	     cin>>std;
	     
	     cout<<"enter age :";
	     cin>>age;
	     
	     cout<<"enter contact :";
	     cin>>contact;
	     
	     cout<<"enter edu_insti :";
	     cin>>edu_insti;
			
		cout<<"enter address :";
	    cin>>address; 
	}
	friend class College;
};

class College{
	
	void getter(){
		
		int  id;
	   char name[20]; 
	   int  rollno;
	   int  std;
	   int age;
	   int contact;
	   char edu_insti[20];  
	   char address[20];
		
			cout << endl << "hotel id : " <<id << endl ;
			cout << endl << "hotel name : " << name << endl ;
			cout << endl << "hotel rollno : " << rollno << endl ;
			cout << endl << "hotel std : " <<std << endl ;
			cout << endl << "hotel age : " << age << endl ;
			cout << endl << "hotel contect : " << contact << endl ;
			cout << endl << "hotel edu_insti : " <<edu_insti << endl ;
			cout << endl << "hotel address : " <<address << endl ;
	}
	   	
};

main(){
		
		College obj;
		
		obj.getter();
	}
