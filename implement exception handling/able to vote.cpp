//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a person cannot be1 if his/her age is less than 18

#include<iostream>

using namespace std;
int main()
{
	int age;
	cout<<"enter the your age:"<<endl;
	cin>>age;
	
	try
	{
		if(age<18)
		{
			throw age;
		}
		else if(age>=100)
		{
			cout<<"your age is very old!!";
		}
		
		else
		{
			cout<<"age is:"<<age<<endl;
		}
	}
	catch(int x)
	{
		cout<<"not vaild your age for vote!!!";
	}
	return 0;
}