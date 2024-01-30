#include<iostream>
using namespace std;
class Distanes{
	
	public:
		int feet;
		int inches;
		int feet1;
		int inches1;
		int x;
		int sum=0;
		int sum1=0;
	void input()
	{
		cout<<"enter the feet value :";
		cin>>feet;
		
		cout <<"enter the inches value :";
		cin>>inches;
		
		cout << "entre the feet : ";
		cin >> feet1;
		
		cout << "entre the inc : ";
		cin >> inches1;
		}
		void output()
		{
			sum=feet+feet1;
			sum1=inches+inches1;
			
			x=sum1/12;
			sum=sum+x;
			sum1=sum1-(x*12);
			
		
			
			cout << endl<<sum <<sum1;
			}	
};

int main()
{
	Distanes m1;
	m1.input();
	m1.output();
	return 0;
}
