#include<iostream>

using namespace std;

class data{
	
	public:
		
		data(){
			cout<<"Deafult";
		}
		
		data(char a){
			cout<<"Who are you  ? ";
		}
		
		data(char a,char b){
			cout<<"I can help you ? ";
		}
};

main(){
	data obj;
}
