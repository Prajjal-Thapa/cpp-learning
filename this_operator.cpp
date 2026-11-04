#include<iostream>
using namespace std;
class Employee{
	private:
		float balance;
	public:
		string name;
		int id;
	Employee(string name, float balance, int id){
		this->name = name;
		this->id = id;
		this->balance = balance;
	}
	void display(){
		cout<<"Name = "<<name<<endl;
		cout<<"Id = "<<id<<endl;
		cout<<"Balance = " << balance<<endl;
		
	}
};
int main(){
	Employee e1("Hari", 50000, 230);
	Employee e2("Zoro", 40000, 30);
	
	e1.display();
	e2.display();
	return 0;
	
}
