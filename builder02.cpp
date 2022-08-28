#include<iostream>

using namespace std;

class student{
	
	  public:
	  	
	  		int roll_no;
	  		char name;
	  		
	  	friend class detl;
};

class detl{
	
	public:
		
		student obj;
		
		void fun(){
			cout<<"Student Roll no : 1"<<obj.roll_no<<endl;
			cout<<"Student Name : utsav"<<obj.name;
		}
};

main(){
	
	detl Y;
	
	Y.fun();
}
