#include<iostream>

using namespace std;
	
class hotel{

	   
	public :
		
	   int  id;
	   char name[20]; 
	   char  type[10];  /// Hotel or motel
	   int  rating;   /// 1 to 7 star
	   char address[20];  // hotel of city
	   int  establish; // starting year of hotel
	   int  staff;
	   int  room;
	   
	void setter(){
		
	     cout<<"enter hotel id :";
	     cin>>id;
	     
	     cout<<"enter hotel name :";
	     cin>>name;
	     
	     cout<<"enter hotel_type(like hotel or motel) :";
	     cin>>type;
	     
	     cout<<"enter hotel_rating(like 1 Star,...7 Star) :";
	     cin>>rating;
	     
	     cout<<"enter hotel_location(city name) :";
	     cin>>address;
	     
	     cout<<"enter hotel_establish_ year :";
	     cin>>establish ;
	     
	     cout<<"enter hotel_staff_quatity :";
	     cin>>staff ;
			
		cout<<"enter hotel_room_quatity :";
	    cin>>room ; 
		
	
	}
	
	void getter(){
		
			cout << endl << "hotel id :" << id << endl ;
			cout << endl << "hotel name :" << name << endl ;
			cout << endl << "hotel type :" << type << endl ;
			cout << endl << "hotel rating :" <<rating << endl ;
			cout << endl << "hotel location :" << address << endl ;
			cout << endl << "hotel establish:" << establish << endl ;
			cout << endl << "hotel staff :" <<staff << endl ;
			cout << endl << "hotel room :" << room << endl ;
	}
	   	
};

main(){
		
		hotel obj;
		
		obj.setter();
		obj.getter();
	}
