#include<iostream>
using namespace std;
int main(){
	int marks[] = {44,55,66};  /*-----------ARRAY--------------*/
	int mathsMarks[4];
	mathsMarks[0]=77;
	mathsMarks[1]=88;
	mathsMarks[2]=99;
	cout<<"these are maths marks"<<endl;
	cout<<mathsMarks[0]<<endl;
	cout<<mathsMarks[1]<<endl;
	cout<<mathsMarks[2]<<endl;
	cout<<"thse are marks"<<endl;
	/*cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	marks[2]=455;                 /*u can change the value of an array before printing
	cout<<marks[2]<<endl;             /*do it with do-while
	*/
	
	/*for(int i=0; i < 3; i++){
		cout<<"the value of marks"<<marks[i]<<endl;
	}*/
	
	
	int*p=marks;        /**with pointer*/
	cout<<"the values of marks[0] is "<<*p<<endl;
	
	cout<<"the values of marks[1] is "<<*(p+1)<<endl;
	
	cout<<"the values of marks[2] is "<<*(p+2)<<endl;
	return 0;
}
