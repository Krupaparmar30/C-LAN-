//Q.2 Write a Program to implement method overriding by following the below-mentioned criteria:
//- Class Cricket -> Class T20Match
//- Class Cricket -> Class ODIMatch
//- Override the getTotalOvers() method in both classes.

#include<iostream>
using namespace std;
class Cricket
{
  protected :
  int a,b;	
};
class T20Match:public Cricket
{
	public:
	void getTotalOvers(int a,int b)
	{
		this->a=a;
		this->b=b;
		cout<<"a  team over  :"<<this->a<<endl;
		cout<<"b team over :"<<this->b<<endl;
	}
};
class  ODIMatch:public Cricket
{
		public:
	void getTotalOvers(int a,int b)
	{
		this->a=a;
		this->b=b;
		cout<<"B->a team over :"<<this->a<<endl;
		cout<<"B->b team over :"<<this->b<<endl;
	}
};
int main()
{
	 ODIMatch o1;
	 o1. getTotalOvers(20,50);
	return 0;
}