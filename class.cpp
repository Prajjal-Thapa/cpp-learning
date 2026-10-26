#include<iostream>
using namespace std;
class Employee{
	public:
		string name;
		int id;
	void display(){
		cout<< "Name = "<< name;
		cout<<" your id = "<< id;
		
	}
};
int main(){
	Employee e1;
	e1.name = "ritik";
	e1.id = 15;
	e1.display();
	return 0;
	
}
