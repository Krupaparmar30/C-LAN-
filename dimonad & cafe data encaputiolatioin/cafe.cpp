//Q.2 Write a Program to get and display N numbers of Fast Food cafe information using encapsulation and the use of a Default constructor by including the below-mentioned attributes:
//- cafe_id
//- cafe_name
//- cafe_type (like a rooftop or normal)
//- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
//- cafe_location (city name)
//- cafe_establish_year
//- cafe_staff_quantity

#include<iostream>
using namespace std;
class Fast_food_cafe
{
	int cafe_id,cafe_type, cafe_rating ,cafe_establish_year,cafe_staff_quantity;
	string cafe_name,cafe_location;
	public:
	Fast_food_cafe()
	{
		cout <<"enter the cafe id:";
		cin>>cafe_id;
		
		cin.ignore();
		cout <<"enter the cafe name:";
		getline(cin,cafe_name);
		
		
		cout <<"enter the cafe type :";
		cin>>cafe_type ;
		
		cout <<"enter the cafe rating :";
		cin>>cafe_rating ;
		
		cin.ignore();
		cout <<"enter the cafe location:";
		getline(cin,cafe_location);
		
        cout <<"enter the cafe establish year:";
		cin>>cafe_establish_year;
		
		cout <<"enter the cafe staff quantity:";
		cin>>cafe_staff_quantity;
		
		cout << endl;
		
		
		
		
		
	
	}
	void setter()
	{
		cout <<"company cafe id:"<<cafe_id<<endl;
		cout <<"company cafe name:"<<cafe_name<<endl;
		cout <<"company cafe type:"<<cafe_type<<endl;
		cout <<"company cafe rating:"<<cafe_rating<<endl;
		cout <<"company  cafe location:"<<cafe_location<<endl;
		cout <<"company  cafe establish year:"<<cafe_establish_year<<endl;
		cout <<"company cafe staff quantity:"<<cafe_staff_quantity<<endl;
						
		cout <<endl;
	}
};
int main()
{
	int n;
	cout <<"enter thee value of n:";
	cin>>n;
	Fast_food_cafe f1;
	
	int i;
	for(i=0;i<n;i++)
	{
		f1.setter();
		
	    
		
	}
	cout <<endl;
	
	return 0;
	
}