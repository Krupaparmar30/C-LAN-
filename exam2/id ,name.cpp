//Q.3 Write a Program to read and print Employee information with the use of Multilevel inheritance. (as same the attached image)

#include<iostream>
using namespace std;
class A
{
		protected :
			int id,ph,salary,exp;
			string name,role,email;
				public:
			void set()
			{
				cout<<"enter the id:"<<endl;
				cin<<id;
				
				cin.ignore();
				cout<<"enter the name:"<<endl;
				getline(cin,name);
				
				cin.ignore();
				cout<<"enter the role:"<<endl;
				getline(cin,role);
				
			}
};
class B:public A
{
		public:
	void setter()
			{
				cout<<"enter the salary:"<<endl;
				cin<<salary;
				
			
				cout<<"enter the exp:"<<endl;
				cin>>exp;
				
				
				
			}
	
};
class C:class B
{
		public:
	void get()
	{
		cout<<id<<endl;
		cout<< name<<endl;
		cout<<role<<endl;
		
	}
};
class D:class C
{
	public:
	void geeter()
	{
		cout<<salary<endl;
		cout<< exp<<endl;
	}
};
int main()
{
	A a1;
	a1.set();
	B b1;
	b1.setter();
	C c1;
	
		return 0;
}