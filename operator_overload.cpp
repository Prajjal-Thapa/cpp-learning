#include <iostream>
using namespace std;
class Distance{
	private:
		float length;
	public:
		Distance(float l){
			length = l;
		}
		Distance operator+(Distance d){
			Distance temp(0);
			temp.length = length + d.length;
			return temp;
		}
		void display(){
			cout<<"Distance = "<< length;
		}
	
};
int main(){
	Distance d1(39);
	Distance d2(10);
	Distance d3 = d1+d2;
	d3.display();
}
