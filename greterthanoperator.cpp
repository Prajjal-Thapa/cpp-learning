#include<iostream>
using namespace std;
class Student{
	private:
		float marks;
	public:
	 	Student(float m){
			marks = m;
		}
		bool operator > (Student s1){
			return marks > s1.marks;
		}
};
int main(){
	Student s1(50);
	Student s2(40);
	if(s1 > s2){
		cout<<"S1 higher marks"<<endl;
	}
	else
	cout<<"S1 less marks"<<endl;
	return(0);
}
