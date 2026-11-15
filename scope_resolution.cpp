#include<iostream>
using namespace std;
class A{
	public:
		void display(){
			cout<<"This is A"<<endl;
		}
};
class B{
	public:
		void display(){
			cout<<"This is b"<<endl;
		}
};
class C : public A, public B{
};
int main(){
	C c1;
	c1.A::display();
	c1.B::display();
	return 0;
}
