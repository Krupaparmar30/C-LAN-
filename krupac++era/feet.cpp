#include<iostream>
using namespace std;
class Distanes{
	
	public:
		int feet;
		int inches;
		int x;
	void input()
	{
		cout<<"enter the feet value :";
		cin>>feet;
		
		cout <<"enter the inches value :";
		cin>>inches;
		}
		void output()
		{
			x=inches/12;
			feet=feet+x;
			inches=inches-(x*12);
			
			cout <<feet <<endl<<inches;
			}	
};

int main()
{
	Distanes m1;
	m1.input();
	m1.output();
	return 0;
}