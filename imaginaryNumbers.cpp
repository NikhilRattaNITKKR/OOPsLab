#include<iostream>
using namespace std;

class complexNumber{
	private:
		int real;
		int imaginary;
	public:
		void getNumber();
		void add(complexNumber c);
		void subtract(complexNumber c);
		void multiply(complexNumber c);
};
void complexNumber::getNumber(){
	cout<<"Enter the real Part : ";
	cin>>real;
	cout<<"\nEnter Imaginary Part : ";
	cin>>imaginary;
}
void complexNumber::add(complexNumber c){
	int resReal=real+c.real;
	int resImaginary=imaginary+c.imaginary;
	cout<<"\n The result of addition is : "<<resReal<<" + ("<<resImaginary<<")i";
}
void complexNumber::subtract(complexNumber c){
	int resReal=real-c.real;
	int resImaginary=imaginary-c.imaginary;
	cout<<"\n The result of subtraction is : "<<resReal<<" + ("<<resImaginary<<")i";
}
void complexNumber::multiply(complexNumber c){
	int resReal=real*c.real-imaginary*c.imaginary;
	int resImaginary=c.real*imaginary+c.imaginary*real;
	cout<<"\n The result of multiplication is : "<<resReal<<" + ("<<resImaginary<<")i";
}

int main(){
	complexNumber c1,c2;
	c1.getNumber();
	c2.getNumber();
	c1.add(c2);
	c1.subtract(c2);
	c1.multiply(c2);
	return 0;
}
