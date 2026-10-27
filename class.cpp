#include<iostream>
using namespace std; 
class Employee{
	public:
		string name;
		int id;
		float salary;
	void setData(string n, int i, float s){
		name = n;
		salary = s;
		id = i;
		}
	void display(){
		cout<<"\nName = "<< name;
		cout<<"\nId = "<< id;
		cout<<"\nSalary = "<<salary;
		cout<<"\n"<<endl;
	}
	
};
int main(){
Employee e1, e2;
e1.setData("Zoro", 15, 5000);
e2.setData("Sanji", 20, 1200);

e1.display();
e2.display();

return 0;
}
