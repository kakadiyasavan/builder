#include<iostream>

using namespace std;

class data{
	
	public:
		
		data(){
		
			cout<<"deafult";
		}
		
		data(int a){
			
			cout<<a;
		}
		
		data(int a,int b){
		
			cout<<" A :  "<<a<<endl<<" B :  "<<b;
		}
		
		
};

main(){
	data obj(10,20);
}
