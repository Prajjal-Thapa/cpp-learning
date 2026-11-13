#include<iostream>
using namespace std;
class Time{
	private:
		int minutes;
	public:
		Time(int t){
			minutes = t;
		}
	void display(){
		cout<<"Minutes = "<< minutes;
	}
};
int main(){
	int x = 200;
	Time t1(x);
	t1.display();
	return 0;
	
}
