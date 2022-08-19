/*CONSTANT*/

#include<iostream>
#include<iomanip>  /**to use setw/
using namespace std;
int main(){
	/*const int a= 3;
	cout<<"the value of a was "<<a;
	a =45;
	cout<<"\n the value of a is"<<a;
	return 0;
*/

/*MANIPULATORS*/

int a=2,b=78,c=1233;
cout<<"the value of a is : "<<a<<endl;

cout<<"the value of b is : "<<b<<endl;

cout<<"the value of c is : "<<c<<endl;

cout<<"the value of a is : "<<setw(4)<<a<<endl;

cout<<"the value of b is : "<<setw(4)<<b<<endl;

cout<<"the value of c is : "<<setw(4)<<c<<endl;
return 0;

}
