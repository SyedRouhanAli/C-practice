#include<iostream>
using namespace std;
	struct employee           /*---------STRUCT------------(union is also same but only executes 1 value at a time)*/
	{
		int employeeID;
		char favChar;
		float salary;
	};
	
	int main(){
		struct employee rouhan;
		struct employee ahmed;
		struct employee maaz;
		rouhan.employeeID = 1;
		rouhan.favChar = 'r';
		rouhan.salary = 990000;
		cout<<"ID =  "<<rouhan.employeeID<<endl;
		cout<<"First character = "<<rouhan.favChar<<endl;
		cout<<"Salary = "<<rouhan.salary<<endl;
		ahmed.employeeID = 2;
		ahmed.favChar = 'a';
		ahmed.salary = 300000;
		cout<<"ID =  "<<ahmed.employeeID<<endl;
		cout<<"First character = "<<ahmed.favChar<<endl;
		cout<<"Salary = "<<ahmed.salary<<endl;
		maaz.employeeID = 3;
		maaz.favChar = 'm';
		maaz.salary = 1200;
		cout<<"ID =  "<<maaz.employeeID<<endl;
		cout<<"First character = "<<maaz.favChar<<endl;
		cout<<"Salary = "<<maaz.salary<<endl;
		
		return 0;
	}
