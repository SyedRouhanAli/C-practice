#include<iostream>
using namespace std;  /*---------ENUM----------*/
int main(){
	enum Meal{
		breakfast, lunch , dinner
	};
	Meal m =breakfast;
	cout<<(m==0);   /*0 change karo value change hojayegi*/
	return 0;
}
