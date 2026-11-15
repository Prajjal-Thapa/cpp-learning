#include<iostream>
using namespace std;
class Employee{
	private:
		string name;
		int id;
	public:
		void setData(string n, int i){
			name = n;
			id = i;
		}
		void displayEmployee(){
			cout<<"Name = "<< name<<endl;
			cout<<"Id = "<< id<<endl;
		}};
class Manager : public Employee{
	private:
		string department;
	public:
		void SetInfo(string d){
			department = d;
		}
		void display(){
			cout<<"Department = "<<department<<endl;
		}
		
};
int main(){
	Manager m1;
	m1.setData("Zoro", 5);
	m1.SetInfo("IT");
	m1.displayEmployee();
	m1.display();
	return 0;
}
		

