#include<iostream>
using namespace std;
//Q.1 Write a Program to overload < operator to find which object contains a higher value from given 2 numbers.
//// ++,-

class Math
{
	
	int a,b;
	public:
		void set()
		{
			cout<<"enter the value of a:"<<endl;
			cin>>a;
			cout<<"enter the value of b:"<<endl;
			cin>>b;
		}
		void get()
		{
			cout<<a<<endl;
			cout<<b<<endl;
		}
	Math operator-(Math &m2)
	{
		Math temp;
		int x=this->a+m2.a;
		int y=this->b+m2.b;
		temp.a=x;
		temp.b=y;
		
		return temp;
	}
	
	
};

int main()
{
	
	Math m1,m2,m3;
	m1.set();
	m2.set();
	m3=m1-m2;
	m3.get();
	return 0;

}