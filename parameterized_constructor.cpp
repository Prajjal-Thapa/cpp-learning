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
	void display(){
		cout<<"\nName = "<< name;
		cout<<"\nEmployee id = "<< id;
		cout<<"\nSalary = "<< salary;
		cout<<"\n";
	}
};
int main(){
	Employee e1("Zoro",2,25000);
	Employee e2("Luffy",1,50000);
	Employee e3("Sanji",3,20000);
	e1.display();
	e2.display();
	e3.display();
	return 0;
}
