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
	Math operator>(Math &m2)
	{
		Math temp;
	    if(m2.a<a)
	    {
	    	temp.a=a;
	    	temp.b=b;
	    	cout << endl << "Higher value from first object =>  " << endl;
		}
		else
	    {
	    	temp.a=m2.a;
	    	temp.b=m2.b;
	    	cout << endl << "Higher value from second object =>  " << endl;
		}
		
		return temp;
	}
	
	
};

int main()
{
	
	Math m1,m2,m3;
	cout << endl << "First object value : " << endl;
	m1.set();
    cout << endl << "Second object value : " << endl;
    m2.set();
	m3=m1>m2;
	m3.get();
	return 0;

}