//Q.2 Write a Program to create a class to read time in seconds and convert it into time in (HH:MM: SS) format.
//For example,
//Input:
//Enter seconds: 4520
//
//Output:
//1:15:20
#include<iostream>
using namespace std;
class convrat{
	
	  public:
		int sec;
		int s,h,m;
	void input()
	{
		cout <<"enter the value of sec:";
		cin >> sec;
		}
		void output()
		{
			h=sec/3600;
			sec=(sec%3600)/60;
			m=sec%60;
			s=m/60;
			
			cout << "hour "<<h<<endl<<"min "<<m<<endl<<"sec "<<s<<endl;
			}	
};
int main()
{
	convrat m1;
	m1.input();
	m1.output();
	return 0;
}