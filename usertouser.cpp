#include<iostream>
using namespace std; 
class Dollar{
	public:
		float dollar;
		
		Dollar(float d){
		dollar = d;
		}
};
class Rupees{
	private:
		float rs ;
		
	public:
		Rupees(Dollar d1){
			rs = 140 * d1.dollar;
		}
		void display(){
			cout<< "Rs = "<< rs;
		}
		
};
int main(){
	Dollar d(50);
	Rupees r = d;
	r.display();
	return 0;
}
