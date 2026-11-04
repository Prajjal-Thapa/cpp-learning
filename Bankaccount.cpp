#include<iostream>
using namespace std;
class BankAcc{
	private:
		float balance;
		float Startbalance;
	public:
		string name;
		int accno;
		
	void setData(float b, string n, int id){
		name = n;
		balance = b;
		Startbalance = b;
		accno = id;	
	}
	
	void deposit(float d){
		balance += d;
	}
	
	void withdraw(float w){
		if(balance >= w)
		balance -= w;
		else
		cout<<"Insufficient balance"<<endl;
	}
	
	void display(){
		cout <<"Account holder : "<< name <<endl;
		cout <<"Account number : "<< accno <<endl;
		cout <<"Starting balance : Rs " << Startbalance << endl;
		cout <<"Closing balance : Rs "<< balance <<endl;
		cout <<"\n";
	}
};

int main(){
	BankAcc b1,b2;
	b1.setData(12000, "Zoro", 3936);
	b2.setData(8000, "Sanji" ,3986);
	
	b1.deposit(2000);
	b2.deposit(3000);
	
	b1.withdraw(4000);
	b2.withdraw(5000);
	
	b1.display();
	b2.display();
	 
	return 0;
}
