//Q.1 Write a Program that defines a shape class with a constructor that gives value to width and height. Then define two sub-classes 
//triangle and rectangle, that calculate the area of the shape area (). In the main, define two objects a triangle and a rectangle, 
//and then call the area() function using these two objects.

#include<iostream>
using namespace std;
class  Shape
{
	
	protected :
		int  width ,height;
		int  totriangle,torectangle;
		
};
class Triangle:public Shape
{  
public:
   void set()
    {
	   cout<<"enter the width :"<<endl;
	   cin>>width;
	   cout<<"enter the height :"<<endl;
	   cin>>height;
	   
	   totriangle=(width*height)*0.5;
	   cout<< "totriangle:"<<totriangle<<endl;
	   
    }
	
};
class Rectangle:public Shape
{
	public:
	 void ket()
    {
	   cout<<"enter the width :"<<endl;
	   cin>>width;
	   cout<<"enter the height :"<<endl;
	   cin>>height;
	   
	  torectangle=(width*height);
	   cout<<"torectangle:"<< torectangle<<endl;
	   
    }
};

int main()
{
	Triangle t1;
	t1.set();
	Rectangle r1;
	r1.ket();
	
	return 0;
	
}