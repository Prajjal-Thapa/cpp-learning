#include<iostream>
using namespace std;
class Distance{
	private:
		float length;
	public:
		Distance(float l){
			length = l;
		}
		operator float(){
			return length;
		}
};
int main(){
	Distance d1(500);
	float x = d1;
	cout<< x << " meter"<<endl;
	return 0;
}
