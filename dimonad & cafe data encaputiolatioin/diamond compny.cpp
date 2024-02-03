//Q.1 Write a Program to get and display N numbers of Diamond companies information using encapsulation and use of Parameterised Constructor by including below
//mentioned attributes:
//- comp_id
//- comp_name
//- comp_staff_quantity
//- comp_revenue (per year)
//- comp_import_raw_diamonds (no. of raw diamonds
//imported per year)
//- comp_export_diamonds (no. of diamonds per year)
//- comp_ceo (name of CEO of the company)

#include<iostream>
using namespace std;
class Diamond
{
	
	int comp_id,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds;
	string comp_name,comp_ceo ;
	int n;
	public:
	Diamond()
	{
	  cout <<"------------Diamond compnayes all detailes !!!--------------";
	}
	Diamond(int comp_id,int comp_staff_quantity,int comp_revenue,int comp_import_raw_diamonds,int comp_export_diamonds,string comp_name,string comp_ceo)
	{
	 this->comp_id=comp_id;
	 this->comp_staff_quantity=comp_staff_quantity;
	 this->comp_revenue=comp_revenue;
	 this->comp_import_raw_diamonds=comp_import_raw_diamonds;
	 this->comp_export_diamonds=comp_export_diamonds;
	 this->comp_name=comp_name;
	 this->comp_ceo=comp_ceo;
	}
	void setter()
	{
		cout <<"enter the company id:";
		cin>>comp_id;
		
		cin.ignore();
		cout <<"enter the company name:";
		getline(cin,comp_name);
		
		
		cout <<"enter the company staff qunantity:";
		cin>>comp_staff_quantity;
		
		cout <<"enter the company revenue:";
		cin>>comp_revenue;
		
		cout <<"enter the company import raw diamonds:";
		cin>>comp_import_raw_diamonds;
		
		cout <<"enter the company export diamonds:";
		cin>>comp_export_diamonds;
		
		cin.ignore();
		cout <<"enter the company ceo:";
		getline(cin,comp_ceo);
	}
	
	

	void getter()
	{
		cout <<"company id:"<<comp_id<<endl;
		cout <<"company name:"<<comp_name<<endl;
		cout <<"company staff qunantity:"<<comp_staff_quantity<<endl;
		cout <<"company revenue:"<<comp_revenue<<endl;
		cout <<"company import raw diamonds:"<<comp_import_raw_diamonds<<endl;
		cout <<"company export diamonds:"<<comp_export_diamonds<<endl;
		cout <<"company ceo:"<<comp_ceo;
						
		cout <<endl;
	}

};
int main()
{

	Diamond d1=Diamond(10,46,54,54,15,"mx company","krupa parmar");
	int i;
	int n;
	cout <<"enter thee value of n:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		d1.setter();
		cout <<endl;
		d1.getter();
		
	}
	cout <<endl;

	return 0;
}
