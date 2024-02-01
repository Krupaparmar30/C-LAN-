//
//Q.2 Write a Program to create a Customer Record System for 5 customers using Encapsulation. Consider the below-mentioned attributes in the Customer structure:
//- cust_id
//- cust_name
//- cust_age
//- cust_city
//- cust_mobile_number
//- cust_simcard_validity (in years)
//- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.)
#include<iostream>
using namespace std;
class customer{
	
	int cust_id,cust_age,cust_simcard_validity, cust_mobile_number;
	string cust_name, cust_city,cust_telecom_brand_name;
	
	
	public:
	void setter(int i)
	{
		 
		  	cout << "enter the value of cust id:";
    		cin >> cust_id;
    		
		  	cin.ignore();
	        cout << "enter the value of cust name:";
    	    getline(cin,cust_name);
    	    
    	   
    	    cout << "enter the value of cust age:";
    		cin >> cust_age;
    		
            cin.ignore();
	        cout << "enter the value of cust city:";
            getline(cin,cust_city);
            
            cout << "enter the value of cust moblie num .:";
    		cin >> cust_mobile_number;
          		
    	  	cout << "enter the value of cust  simcard validity (in year ):";
    		cin >> cust_simcard_validity;
    		
    	    cin.ignore();
    		cout << "enter the value of cust telecom brand name :";
    		getline(cin,cust_telecom_brand_name);
  	     
    	   
	
    		
		  
    		
	}
	void getter(int i)
	{
			
			cout <<cust_id<<endl;
			cout <<cust_name<<endl;
			cout <<cust_age<<endl;
             cout <<cust_city<<endl;
              cout <<cust_mobile_number<<endl;
              cout <<cust_simcard_validity<<endl;
            cout <<cust_telecom_brand_name<<endl;
			
	}
};
int main()
{
	customer s1;
	int i;
	for(i=0;i<5;i++)
	{
		s1.setter(5);
		cout <<endl;
	}
	for(i=0;i<5;i++)
	{
		s1.getter(5);
		cout <<endl;	
	}

	return 0;
}
