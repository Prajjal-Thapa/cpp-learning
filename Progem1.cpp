#include<iostream>
using namespace std;
class Time{
	private:
		int minute;
		int hour;
		int remainder;
	public:
		Time(int m){
			minute = m;
			hour = minute / 60;
			remainder = minute % 60;
			
		}
		void display(){
		
			cout<<"Hour = "<< hour <<" Minute = "<<remainder <<endl;
		}
};

int main()
{
	int m = 80;
	Time t1 = m;
	t1.display();
	return 0;
	
}
