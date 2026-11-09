#include<iostream>
using namespace std;
class BankAcc{
	private:
		float balance;
	public:
		BankAcc(float b)
		{
			balance = b;
		}
		BankAcc operator+(BankAcc b1){
			BankAcc temp(0);
			temp.balance = balance + b1.balance;
			return temp;
		}
		void display(){
			cout<<"Balance = "<<balance;
		}
		
};
int main(){
	BankAcc a1(5000);
	BankAcc a2(6000);
	BankAcc a3 = a1 + a2;
	a3.display();
	return 0;
	}
