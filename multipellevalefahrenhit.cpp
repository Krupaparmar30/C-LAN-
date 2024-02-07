//Q.2 Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that Fahrenheit temperature into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
//- Class P has the following members: temperature attribute in float
//- Class Q has the following members: toFehrenheit() method
//- Class R has the following members: toKelvin() method.

#include<iostream>
using namespace std;
class P
{
  protected:
  float Celsius, Fahrenheit,Kelvin ;	
};
class Q :public P
{
	public:
		void Fahrenheitto()
		{
		  cout<<"enter the value of  Celsius:";
	      cin>>Celsius;
	      Fahrenheit=(9.5*Celsius)+32;
	      cout<<Fahrenheit<<endl;
		}
};
class R :public Q
{
	public:
		void Kelvinto()
		{
			Kelvin= (5/9 * Fahrenheit) + 459.67;
//		
			 cout<<Kelvin;
		}
	
};
int main()
{
	Q q1;
	q1.Fahrenheitto();
	R r1;
	r1.Kelvinto();
	return 0;
}