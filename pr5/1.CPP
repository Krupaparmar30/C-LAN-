//Q.1 Write a Program to create a class
// that illustrates the concept of handling all types of exceptions using general exceptions.
#include<iostream>
using namespace std;
class Divide{

  int n;
  
   public :
   	void anynumber()
   	{
   	  cout << "enter number : ";
   	  cin >> n;
   	  
   	  try
   	  {
   	  	if(n==0)
   	  	{
   	  		cout << "number is divisible by 0 !!";
		}
		else
		{
			throw runtime_error("number is not divisible by 0 !!");
		}
	  } 
	  catch(runtime_error error)
	  {
	  	 cout << error.what();
	  }
	  catch(...)
	  {
	  	cout << "number is not divisible by 0 !!";
	  }
	}
  
  	
}; 
 
int main()
{
     Divide d1;
    d1.anynumber();
    
  return 0;
    
}
  	
