#include<iostream>
using namespace std;

void swapPointer(int* a ,int* b){ /*--------------call by reference using pointers------------*/
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a=4, b=5;
	/*cout<<"the sum of 4 and 5 is "<<sum(a,b);
	*/
	cout<<"the value of a is "<<a<<" and value of b is "<<b<<endl;
	swapPointer(&a, &b);
	cout<<"the value of a is "<<a<<" and value of b is "<<b<<endl;
	return 0;
}

