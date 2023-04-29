#include<iostream>

using namespace std;

class A{
	
	public :
		void print1(){
			
			cout<<"class A"<<endl;
		}
};
class B{
	
	public :
		void print2(){
			
			cout<<"class B"<<endl;
		}
};
class C : public A{
	
	public :
		void print3(){
			
			cout<<"class C"<<endl;
		}
};
class D : public C{
	
	public :
		void print4(){
			
			cout<<"class D"<<endl;
		}
};

int main(){
	
	C obj2;
	
	obj2.print2();
	obj2.print1();
	obj2.print3();
	
	return 0;
}
