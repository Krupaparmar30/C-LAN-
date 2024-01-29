//Q.1 Write a Program to create an Employee Record System using the Class and object of any 5 employees. Consider the below-mentioned attributes in the Employee class:
//- emp_id
//- emp_name
//- emp_age
//- emp_role
//- emp_salary
//- emp_city
//- emp_experience
//- emp_company_name

#include<iostream>
#include<string.h>

using namespace std;
class emp 
{
	
	public:
	string emp_name, emp_role, emp_city,emp_company_name;
	
	int emp_id,emp_age,emp_salary,emp_experience;

    void input()
    {
    	getline(cin,emp_name);
    	cout << " enter the emp name:" << endl;
    	cin >> emp_name;
    	
      getline(cin,emp_role);
	    cout << " enter the emp role:" << endl;
    	cin >> emp_role;
    	
    	getline(cin,emp_city);
    	cout << " enter the emp city:" << endl;
    	cin >> emp_city;
    	
    	getline(cin,emp_company_name);
    	cout << " enter the emp compny name:" << endl;
    	cin >> emp_company_name;
    	
    	cin.ignore();
    
    	
    	cout << " enter the emp id:" << endl;
    	cin >> emp_id;
    	
    	cout << " enter the emp age:" << endl;
    	cin >> emp_age;
    	
	}
	void output()
	{
		cout << emp_name << endl;
	
		cout << emp_role<< endl;
		cout << emp_city << endl;
		cout << emp_company_name << endl;
			cout << emp_id << endl;
		cout << emp_age << endl;
		
	}
	
};

int main()
{
   
   emp m1[100];	
   int i;
   for(i=0;i<1;i++)
   {
    cout <<endl;
   	m1[i].input();
   	
    printf("\n");
   }
   
   for(i=0;i<1;i++)
   {
   	 m1[i].output();
   	 printf("\n");
   }
	
	return 0;
	
}
