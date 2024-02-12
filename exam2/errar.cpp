//Q.4 WAP to solve ambiguity error.
#include<iostream>
using namespace std;

class A
{
	
	protected :
		int a=50;
};
class B
{
	protected :
		int a=20;
};

class C:public A,public B
{
	public:
	void set()
	{
		cout<<A::a<<endl;
			cout<<B::a<<endl;
	}
};
int main()
{
	C c1;
	c1. set();
		return 0;
}