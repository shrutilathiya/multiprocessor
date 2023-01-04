#include<iostream>

using namespace std;

class A{
	
	public:
		
		void fun(){
			
			cout<<"thank you"<<endl;
		}
};

class B : public A{
	
	public:
		
		void fun(){
			
			cout<<"welcome";
		}
};

main(){
	
	B obj;
	
	obj.A::fun();
	obj.B::fun();
}
