//Q.1 Write a Program to get and display Hotels and static information using Encapsulation with an array of objects member by including the below-mentioned attributes:
//- hotel_id
//- hotel_name -static
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year - static
//- hotel_staff_quantity
//- hotel_room_quantity

#include<iostream>
using namespace std;

class Hotel
{
	static string hotel_name;
	int hotel_id,hotel_staff_quantity, hotel_room_quantity;
	
	string hotel_type,hotel_rating,hotel_location;
	
	
	static  int hotel_establish_year;


	
	public:
	void setter()
	{
		cout <<"enter the hotel id:";
		cin >> hotel_id;
		
		cin.ignore();
		cout<<"enter the hotel type (like hotel or motel): ";
		getline(cin,hotel_type);
		
		cout <<"enter the hotel reting:";
		cin>>hotel_rating;
		
		cin.ignore();
		cout <<"enter the hotel locatioin:";
		getline(cin,hotel_location);
		
		cout <<"enter the hotel staff :";
		cin>>hotel_staff_quantity;
		
		cout <<"enter the hotel room  :";
		cin>> hotel_room_quantity;
		
	}
	
	void getter()
	{
		cout << hotel_name<<endl;
		cout <<"-----------------------------------------"<<endl;
		cout <<hotel_establish_year<< "year"<<endl;
		cout<<"------------------------------------------"<<endl;
		cout <<hotel_id<<endl;
		cout <<hotel_type<<endl;
		cout <<hotel_rating<<endl;
		cout <<hotel_location<<endl;
		cout <<hotel_staff_quantity<<endl;
		cout <<hotel_room_quantity<<endl;
		
	}
};

string Hotel::hotel_name="A Grand Hotel";
int Hotel::hotel_establish_year=10;
  
int main()
{
	Hotel s1[50];
	int i;
	for(i=0;i<2;i++)
	{
			s1[i].setter();
			cout << endl;
	}
  for(i=0;i<2;i++)
  {
  		s1[i].getter();
  			cout << endl;
  }

	
	return 0;
}
