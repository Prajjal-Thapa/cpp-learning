//exception handling = unexpected errors occured( number / 0 , executing file that doesnot exist, invalid value)
// important terms = try block , throw statement , catch block
#include<iostream>
using namespace std;
int main(){
		try{
			throw 14.5f;
		}
		catch(int x){
			cout<<"Int exception";
		}
		catch(float x){
			cout<<"float exception";
		}
		catch(double x){
			cout<<"double exception";
		}
		catch(...){
			cout<<"Unknown exception";
		}
}
