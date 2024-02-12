//Q.2 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.
#include<iostream>
using namespace std;

class A
{
		protected :
			int x,sum,ans;
		
				
			
};
~class A()
{
	cout<<"all cubs and sqarees:";
}

class Square:public A
{
	public:
	void gun()
	{
		cout<<"enter the value of x:";
	   cin>>x;
	   	
	 sum=x*x;
	cout<<"square:"<<sum<<endl;
	}
	
};
class Cube:public A
{
	public:
	void kun()
	{
		  cout<<"enter the value of x:";
	   cin>>x;	
	ans=x*x*x;
	cout<<"cube:"<<ans<<endl;
	}
	
};

int main()
{

	Square s1;
	s1.gun();
	Cube c1;
	c1.kun();
	
		return 0;
}