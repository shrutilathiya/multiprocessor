#include<iostream>

using namespace std;

class Data{
	
	public:
		
		void fun(int a){
			
			cout<<"Your value for a : "<<a<<endl<<endl;
		}
		
		void fun(int a , int b){
			
			cout<<"Your value for a : "<<a<<endl;
			cout<<"Your vlaue for b : "<<b<<endl;
		}
}; 

main(){
	
	Data obj;
	
	int a,b;
	
	a = 100;
	b = 200;
	
	obj.fun(a);
	obj.fun(a,b);
	
} 
