#include<iostream>
using namespace std;

class Message
{
	string msg;
	
	public :
		
		Message(string msg)
		{
			this->msg = msg;
		}
		void print()
		{
			cout << msg << endl << endl;
		}
		void print(string newMessage)
		{
			cout << msg << " " << newMessage << endl;
		}
};
int main()
{
	Message m1("Hey!");
	
	m1.print();
	m1.print("Mayuri");
	return 0;
}