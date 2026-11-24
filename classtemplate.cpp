#include<iostream>
using namespace std;

template<class T>

class Calculator{
	private: 
		T a,b;
	public:
		Calculator(T x, T y){
			a = x;
			b = y;
		}
		
	T display(){
		return a*b;
	}
};
int main(){
	Calculator <int> c1(3,4);
	Calculator <float> c2(3.5,4.2);
	cout<< c1.display()<<endl;
	cout<< c2.display()<<endl;
}
