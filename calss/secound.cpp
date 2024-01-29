//Q.3 Write a program to convert second into hh: mm: ss.
#include<iostream>
using namespace std;

class convert
{
  
  
  public:
  int hour,min;
  int sec;
  int s;
  
  void output()
  {
  	hour=sec/3600;
  	min=(sec%3600)/60;
  	s=sec%60;
  	cout <<  hour <<"\thour" <<endl<< min <<"\tmin" <<endl<< s<<"\tsecound" <<endl;
	  }	
};
int main()
{
	convert s1;
	cout<<"enter the value of secound :";
	cin>>s1.sec;
	
	s1.output();
	
	return 0;
	
}