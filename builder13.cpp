#include<iostream>

using namespace std;

class data{
	
	public:
		int a = 10;
		int b;
		
		
		
		friend class fun;
};

class fun{
	
	public:
		data obj;
		 
		 void def(){
		 	cout<<"Value : "<<obj.a;
		 }
};

main(){
	fun s;
	s.def();
}
