#include<iostream>
using namespace std;
class height{
	private:
		int meter;
		int centimeter;
	public:
		height(int m, int c){
			meter = m;
			centimeter = c;
		}
	friend height operator+(height h1, height h2);
	void display(){
		cout <<"m = "<<meter<< endl;
		cout <<"cm = "<<centimeter <<endl;;
	
	}
};
height operator+(height h1,height h2){
	height temp(0,0);
	temp.meter = h1.meter + h2.meter;
	temp.centimeter = h1.centimeter + h2.centimeter;
	if (temp.centimeter >= 100){
		temp.meter = temp.meter + temp.centimeter / 100;
		temp.centimeter = temp.centimeter % 100;
	}
	
	return temp;
}
int main(){
	height h(5,45);
	height k(4,55);
	height x = h+k;
	x.display();
	return 0;
}
