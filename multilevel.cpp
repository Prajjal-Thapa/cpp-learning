#include<iostream>
using namespace std;
class Animal{
	protected:
		string name;
	public:
		Animal(string n){
			name = n;
		}
};
class Dog: public Animal{
	protected:
		string breed;
	public:
		Dog(string n, string b) : Animal(n){
			breed = b;
		}
};
class Puppy: public Dog{
	protected:
		int age;
	public:
		Puppy(string n, string b, int a) : Dog(n,b){
			age = a;
		}
	void display(){
		cout<<"Name = "<<name<<endl;
		cout<<"Breed = "<<breed<<endl;
		cout<<"Age = "<<age<<endl;
	}
	};
int main(){
	Puppy p("Sanji","pug",14);
	p.display();
}
