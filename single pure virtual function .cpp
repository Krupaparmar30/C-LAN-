//Q.1 Write a Program to perform some basic mathematical operations using an Abstract class such as:
//- the area of a circle
//- the area of a triangle
//- the area of a rectangle
//- use one single pure virtual function named calculate() to perform all the above operations.

#include<iostream>
using namespace std;

class Seap
{
	public:
		int r,ans,h;
		const float pi=3.14;
		
	virtual	void calculate()=0;
};
class  Circle:public Seap
{
	public:
	 void calculate()
	 {
	 	cout<<"enter the r: "<<endl;
	 	cin>>r;
	 	
	 	ans=pi*r*r;
	 	cout<<"------circle area is:"<<ans<<endl;
	 }
	
};
class Triangle:public Seap
{
	public:
	 void calculate()
	 {
	 	cout<<"enter the r: "<<endl;
	 	cin>>r;
	 	
	 	cout<<"enter the h: "<<endl;
	 	cin>>h;
	 	
	 	ans=0.5*h*r;
	 	cout<<"--------Triangle area is:"<<ans<<endl;
	 	
	 }

};
class Rectangle:public Seap
{
	public:
	void calculate()
	 {
	 	cout<<"enter the r: "<<endl;
	 	cin>>r;
	 	
	 	cout<<"enter the h: "<<endl;
	 	cin>>h;
	 	
	 		ans=h*r;
	 	cout<<"----------Rectangle area is:"<<ans<<endl;
	 	
	 }
	
};

int main()
{
	 Circle c1;
	  Triangle t1;
	   Rectangle r1;
	   c1.calculate();
	  
	   t1.calculate();
	  
	   r1.calculate();
	  
	return 0;
}