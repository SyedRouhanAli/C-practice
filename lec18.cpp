#include<iostream>
#include<string>
using namespace std; /*---------------classes and objects------------------*/

class binary{               /*https://youtu.be/d363dW0AeS8*/
		string s;
		public:
			void read(void);
			void chk_bin(void);
			void ones(void);
			void show(void);
	};
	
void binary::read(void){
	cout<<"enter a binary number"<<endl;
	cin>>s;
}

void binary::chk_bin(void){
	for(int i=0; i < s.length(); i++){
		if(s.at(i)!='0' && s.at(i)!='1'){
			cout<<"incorrect binary format "<<endl;
			exit(0);
		}
	}
}

void binary::ones(void){
	for(int i=0; i < s.length(); i++){
		if(s.at(i)=='0'){
			s.at(i)='1';
		}
		else
		{
			s.at(i)='0';
		}
	}
}

void binary::show(void){
	cout<<"displaying your binary number "<<endl;
		int i=0;
		for(int i=0 ; i < s.length(); i++)
		{
			cout<<s.at(i);
			
		}
	
}




int main(){
	binary b;
	b.read();
	b.chk_bin();
	b.show();
	b.ones();
	b.show();
	
	
	return 0;	
}
