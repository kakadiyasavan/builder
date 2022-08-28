#include<iostream>

using namespace std;

class data{
	
	public:
		
		int a=10;
		int b=20;
		int c;
		
		~data(){
			c=a+b;
			cout<<"NUmber is "<<c<<endl;
		}
		
		data(){
			c=a*b;
			cout<<"NUmber is "<<c<<endl;
		}
};

main(){
	data obj;
}
