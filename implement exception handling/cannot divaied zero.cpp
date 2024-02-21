#include<iostream>
using namespace std;
//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//a number cannot be divided by zero
int main()
{
	int a,b;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"enter the value of b:";
	cin>>b;
	
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		{
			cout<<"Dvisioin is:"<<a/b;
		}
	}
	catch(int x)
	{
	cout<<"cannot be divided by zero !!!!"<<endl;	
	}
}