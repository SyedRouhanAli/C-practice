#include<iostream>
using namespace std;
int main(){
/*	float f=34.4;
    long double l=34.4;
    cout<<"the valu of f is "<<f<<endl<<"the value of l is"<<l;
    return 0;
*/
/*REFERRING VARAIBLES*/
/*
float a=445;
float & b=a; /*referring b to a
cout<<a<<endl;
cout<<b<<endl;
return 0;
*/

/*TYPECASITNG*/
int a=  45;
float b =45.46;
cout<<"The value of a is "<<(float)a<<endl;
cout<<"the value of a is "<<float(a)<<endl;
cout<<"the value of b "<<(int)b<<endl;
cout<<"the value of b"<<int(b)<<endl;
int c=int(b);
cout<<"the expression is "<<a+b<<endl;
cout<<"the expression is "<<a+ int(b)<<endl;
cout<<"the expression is"<<a+(int)b<<endl;
return 0;
}

