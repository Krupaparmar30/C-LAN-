
//Q.2 Write a Program to create a Car Record System using the Class and object of any 4 Cars. Consider the below-mentioned attributes in the Car class:
//- car_id
//- car_company_name
//- car_color
//- car_model
//- car_release_year

#include<iostream>
#include<string.h>

using namespace std;
class Car
{
	public:
	string car_company_name, car_color,car_model;
	int car_id;
	int car_release_year;
	
	void input()
	{
		getline(cin,car_company_name);
		cout << " enter the car company  name:" << endl;
    	cin >> car_company_name;
    	
    	getline(cin,car_color);
    	cout << " enter the car color :" << endl;
    	cin >> car_color;
    	
    	getline(cin,car_model);
    	cout << " enter the car modal :" << endl;
    	cin >>  car_model;
    	
    		cin.ignore();
    	
    	
    	cout << " enter the car id:" << endl;
    	cin >>  car_id;
    	
    	cout << " enter the car release year :" << endl;
    	cin >> car_release_year;
    
     
	}
	void output()
	{
		cout << car_company_name << endl;
		cout << car_color <<endl;
		cout <<car_model <<endl;
		cout <<  car_id<<endl;
		cout <<  car_release_year <<endl;
		
	}
		
		 
	
};

int main()
{
	
	Car s1[100];
	int i;
	for(i=0;i<5;i++)
	{
		cout <<endl;
   	s1[i].input();
   	
    printf("\n");
	}
	
	
	for(i=0;i<5;i++)
	{
		cout <<endl;
   	  s1[i].output();
   	
    printf("\n");
	}
	return 0;
}