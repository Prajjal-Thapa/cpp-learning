#include<iostream>
using namespace std;
class Employee{
	private:
		float salary;
	public:
		string name;
		int id;
	Employee(string n, int i, float s){
		name = n;
		id = i;
		salary = s;
	}
	
	Employee(const Employee &e){
		name = e.name;
		id = e.id;
		salary = e.salary;
	}
	
	void display(){
		cout<<"Name = " <<name<<endl;
		cout<<"Id = " << id<<endl;
		cout<<"Salary = "<<salary<<endl; 
		cout<<"\n";
	}
	
};
int main(){
	Employee e1("Zoro" ,2 , 30000);
	Employee e2 = e1;
	e1.display();
	e2.display();
	return 0;
	}
