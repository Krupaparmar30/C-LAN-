//Q.1 Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
//- Class X has the following members: a, b & c attributes in integer data type
//- Class Y has the following members: setData() and getData() methods
#include<iostream>
using namespace std;
class X
{

	protected:
			int a,b,c,ans,ans1,ans2,sum=0;
};
class Y:public X
{
	public:
	void setData()
	{
		cout <<"enter the num of a:";
		cin>>a;
		cout <<"enter the num of b:";
		cin>>b;
		cout <<"enter the num of c:";
		cin>>c;
		
		
	}
	void getData()
	{
		ans=a*a*a;
		ans1=b*b*b;
		ans2=c*c*c;
		cout<<"cub is :"<<ans<<endl;
		cout<<"cub is :"<<ans1<<endl;
		cout<<"cub is :"<<ans2<<endl<<endl;
		sum=ans+ans1+ans2;
		cout<<"all cub's sum is :"<<sum;
	}
};
int main()
{
	Y y1;
	y1.setData();
	y1.getData();
	return 0;
}