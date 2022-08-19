#include<iostream>
using namespace std;


/*
inline int product(int a, int b){  /*----inline function------| nothing special
	return a*b;}*/

float moneyRecieved(int currentMoney , float factor=1.04){ /*-----default values/arguments------*/
	return currentMoney * factor;
}

int main(){
	/*int a,b;
	cout<<"enter value a and b \n";
	cin>>a>>b;
	cout<<"product of a and b is "<<product(a,b)<<endl;
	*/
	int money = 100000;
	cout<<"if u have "<<money<<" ruppees in your account , u will recieve  "<<
	moneyRecieved(money)<<" rs after 1 year"<<endl;
	cout<<"for VIP: if u have "<<money<<" rs in ur acc u will recieve "<<
	moneyRecieved(money, 1.1)<<" rs after 1year"<<endl;
	
	return 0;
}
