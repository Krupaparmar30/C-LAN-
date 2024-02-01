//Q.1 Write a Program to create Student Record System for 5 students using Encapsulation. Consider the below-mentioned attributes in the Student class:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_email
//- stu_college

#include<iostream>
using namespace std;
class record{
	
	int stu_id;
	int stu_age;
    string stu_name,stu_course,stu_city,stu_email,stu_college;
    int i;
    
    public:
    	
    
    	void setter(int i)
    	{
    	    
    	
    				
            cout << "enter the value of id:";
    		cin >> stu_id;
    		
    		cin.ignore();
			cout << "enter the value of name:";
    	    getline(cin,stu_name);
    	    
    	    cout << "enter the value of age:";
    		cin >> stu_age;
    	    
    	    cin.ignore();
    		cout << "enter the value of coures:";
            getline(cin,stu_course);
            		
    	
    		cout << "enter the value of city:";
    		getline(cin,stu_city);
    	
    		cout << "enter the value of email:";
    	    getline(cin,stu_email);
    	
    	
    		cout << "enter the value of collage:";
    		getline(cin,stu_college);
    		
    	
    		cout<<endl;
    		
			
    		
		}
		void getter(int i)
		{
			
			cout <<"stu id:"<<stu_id<<endl;
			cout <<"stu name:"<<stu_name<<endl;
			cout <<"stu age :"<<stu_age<<endl;
            cout <<"stu course:"<<stu_course<<endl;
            cout <<"stu city:"<<stu_city<<endl;
            cout <<"stu email :"<<stu_email<<endl;
            cout <<"stu college :"<<stu_college<<endl;
            
            cout <<endl;
			
                
		}

	
};
int main()
{
   record s1;
    int i;
   for(i=0;i<5;i++)
   {
   	s1.setter(5);
   }
	
	for(i=0;i<5;i++)
	{
			s1.getter(5);
	}

	
	return 0;
}
