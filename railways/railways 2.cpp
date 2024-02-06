///Q.1 Write a Program to make a Railway Reservation System.
////Requirements:
////(A) User Input: 
////- Train Number
////- Train Name
////- Source
////- Destination
////- Train Time
////(B) Display Records: 
////- All Records
////- By Searching Train Number
////(C) Minimum 3 Input Train Records
#include<iostream>
using namespace std;
class  Railway
{
	
	
	static string Source;
	string trainName,destination;
	int trainNumber,trainTime;
	
	public:
	void input()
	{
		cout << "enter the  Train Number: ";
		cin>> trainNumber;
		
		cin.ignore();
		cout << "enter the  Train Name: ";
		getline(cin,trainName);
	
	
	    cout << "enter the Train Destination: ";
		getline(cin,destination);
		
		
		cout << "enter the Train Time: ";
		cin>>trainTime;
	}
	void DisplayRecords()
	{
		cout <<"------------------------------train displayrecords!!!-----------------------------------"<<endl<<endl;
		cout <<"Train Source is :"<<Source<<endl;
		cout <<"Train Number is :"<<trainNumber<<endl;
		cout <<"Train Name is :"<< trainName<<endl;
        cout <<"Train Destination is :"<< destination<<endl;
		cout <<"Train Time:"<<trainTime<<":00"<<endl;
	}
	void SearchingTrainNumber()
	{
		cout <<"------------------------------SearchingTrainNumber!!!------------------------------------"<<endl<<endl;
		cin>>trainNumber;
		cout <<"Train Source is :"<<Source<<endl;
		cout <<"Train Number is :"<<trainNumber<<endl;
		cout <<"Train Name is :"<< trainName<<endl;
        cout <<"Train Destination is :"<< destination<<endl;
		cout <<"Train Time:"<<trainTime<<":00"<<endl;
		
	}
	void AllRecords()
	{
			cout <<" -----------------------All Records Railway Reservation !!!---------------------------------"<<endl;
			cout <<"A.continue user input !!"<<endl;
			cout <<"B. sawing DisplayRecords !!"<<endl;
			cout <<"C. SearchingTrainNumber!!"<<endl;
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
		   SearchingTrainNumber();
		}
		else if(choies =='D')
		{
		   cout<<"thank you visit our railway !!"<<endl;
		}
		else
		{
			cout<<"enter between A TO D"<<endl;
		}
	}
	

};
string Railway :: Source ="SURAT";
int main()
{
	cout<<"-----------------------Railway Reservation---------------------------------"<<endl<<endl;
	
	 int n;
	 cout <<"enter the num of n:";
	 cin>>n;
	  Railway r1[n];
	 int i;
	 for(i=0;i<n;i++)
	 {
	 	 r1[i].input();
	 	 r1[i].AllRecords();
	 	 
	 	 cout <<"============your Railway Reservation completed!!================ "<<endl<<endl;
	 }
	
	 
	return 0;
}