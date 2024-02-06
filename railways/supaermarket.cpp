//Q.2 Write a Program to make a Supermarket Billing System.
//Requirements:
//(A) User Input:
//- Item Number
//- Item Name
//- Quantity
//- Price
//- Discount
//(B) Verify User Id And Password
//(C) Display Records:
//- All Records
//- By Searching Item Number

#include<iostream>
using namespace std;
class Suparmarket
{
	
	int ItemNumber, Quantity,Price,Discount;
	string ItemName;
	static string suparname;

	public:
	void input()
	{
		cout << "enter the Item Number: ";
		cin>>ItemNumber;
		
		cin.ignore();
		cout << "enter the Item Name: ";
		getline(cin,ItemName);
	
	
	    cout << "enter the Quantity: ";
		cin>>(cin,Quantity);
		
		
		cout << "enter the Price: ";
		cin>>Price;
		
		cout << "enter the  Discount: ";
		cin>> Discount;
	}
	void DisplayRecords()
	{
		cout<<suparname<<endl;
		cout <<"Item Number is :"<<ItemNumber<<endl;
		cout <<" Item Name is :"<< ItemName<<endl;
		cout <<"Quantity is :"<< Quantity<<endl;
        cout <<" Priceis :"<< Price<<endl;
		cout <<"Discount:"<<Discount<<endl;
	}
	void  SearchingItemNumber()
	{
		cout<<" Searching Item Number"<<endl;
		cin>>ItemNumber;
		cout <<"Item Number is :"<<ItemNumber<<endl;
		cout <<" Item Name is :"<< ItemName<<endl;
		cout <<"Quantity is :"<< Quantity<<endl;
        cout <<" Priceis :"<< Price<<endl;
		cout <<"Discount:"<<Discount<<endl;
	}
	void  AllRecords()
	{
		cout<<"-------------------All Records------------------------------"<<endl;
		cout <<"A.continue user input !!"<<endl;
			cout <<"B. sawing DisplayRecords !!"<<endl;
			cout <<"C. SearchingItemNumber!!"<<endl;
			cout <<"D.exit !!"<<endl;
			cout <<"enter between (A to D) !!"<<endl;
			
			char choies;
			cout <<"enter the your choies !!!"<<endl;
			cout << "Enter your choice (Like A,B,C,D) : " <<endl; 
		    cin >> choies;
		    	if (choies =='A')
		{
			input();
		}
		else if(choies =='B')
		{
			DisplayRecords();
		}
		else if(choies =='C')
		{
		   SearchingItemNumber();
		}
		else if(choies =='D')
		{
		   cout<<"thank you visit our SUPERMARKET!!"<<endl;
		}
		else
		{
			cout<<"enter between A TO D"<<endl;
		}
	}
   
};
string Suparmarket::suparname="----------------------------------nikk supermarket-------------------------------";

int main()
{
	
string id="krupa3011";
string pass="krupa3011parmar";
  
   	string upass,uid;
   	cout<<"enter the your password!!!";
   	cin>>upass;
   		cout<<"enter the your id!!!";
   	cin>>uid;
   	
   	if(uid!=id || upass!=pass)
   	{
   		cout<<"invaild"<<endl;
	   }
   	
   Suparmarket s1;
	
    
	
	int i;
	for(i=0;i<3;i++)
	{
	
	
		
  	    s1.input();
  		s1.AllRecords();
  	
		
	}
	
	return 0;
}