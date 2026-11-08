#include<iostream>
using namespace std;
class Student{
	private:
		float marks;
	public:
		Student(float m){
			marks = m;
		}
		void setMarks(float m){
			if (m < 0 || m > 100){
				cout<<"Invalid marks"<<endl;
			}
			else {
				marks = m;
			}
		}
		float getMarks(){
			return marks;
		}
		
};
int main(){
	Student s1(0);
	Student s2(0);
	s1.setMarks(67);
	s2.setMarks(120);
	cout<<"Marks = "<<s1.getMarks()<<endl;
	cout<<"Marks = "<<s2.getMarks()<<endl;
	return 0;
}
