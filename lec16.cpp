#include<iostream>
using namespace std;  /*--------function overloading------------*/

int volume(double a, int b){
	return (3.142 * a * a * b);
}


int main(){
	cout<<"the volume of cylinder is "<<volume(3,6)<<endl; /*nothing new just values overloaded in cout*/
	return 0;
}
