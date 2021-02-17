#include<iostream>
using namespace std;

//gcd() function to calculate HCF or GCD of numerator or denominator
int gcd(int a, int b)
{
if (b == 0)
return a;
return gcd(b, a % b);
}

//declaration and definition of rational class
class rational
{
public:
int num,denom;

//default constructor in rational class
rational()
{
num=1;
denom=1;
}

//double argumented constructor in rational class
rational(int d1,int d2)
{
num=d1;
denom=d2;
}

//reduce() function to reduce numerator and denominator by HCF
void reduce()
{
int g;
g=gcd(num,denom);
num/=g;
denom/=g;
cout<<"\nNumerator = "<<num<<"\nDenominator = "<<denom;
}

//<< operator overloading
friend ostream &operator<<( ostream &output, const rational &r)
{
output << "Numerator = " <<r.num<< "\nDenominator = " <<r.denom;
return output;
}

//>> operator overloading
friend istream &operator>>( istream  &input, rational &r ) {
input >>r.num>>r.denom;
return input;
}

void add( rational r){

	num=num*r.denom+r.num*denom;
	denom=denom*r.denom;
	cout<<"\n The result of addition is :";
	reduce();
}

};

//main() function to test rational class
int main()
{
rational r1,r2;
cout<<"\nEnter the value of object:";
cin>>r1;
r1.reduce();
cout<<"\nEnter the value of rational number 2:";
cin>>r2;
r2.reduce();
r1.add(r2);
return 0;
}
