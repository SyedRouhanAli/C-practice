#include<iostream>
using namespace std;  /*--------recursion-----*/

int fib(int n){     /*------------fibonacci-------*/
	if(n<2){
		return n;
	}
	return fib(n-2) + fib(n-1);
}

/*int factorial(int n){
	if(n<=1){
		return 1;
	}

	return n * factorial(n-1);
}*/

int main(){
/*	int a;
	cout<<"enter a number "<<endl;
	cin>>a;
	cout<<factorial(a)<<endl;
*/	

    int a;
    cout<<"enter number \n";
    cin>>a;
    cout<<fib(a)<<endl;
	return 0;
}
