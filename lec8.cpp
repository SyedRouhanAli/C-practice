#include<iostream>
using namespace std;
int main(){
	int a=3;
	int * b=&a;               /*int * - pointer variable ,    & - address of operator   *- derefernce of operator*/
	cout << "the address of a is "<<&a<<endl;
	cout <<"the address of a is "<<b<<endl;
	cout<<"the value of b is "<<*b;
	
	return 0;
	
}
