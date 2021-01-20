#include<iostream>
using namespace std;
int main(){
	int a, b, temp;
	cin>>a>>b;
	cout<<"Before swapping A is : "<<a<<" and B is : "<<b<<"\n";
	temp=a;
	a=b;
	b=temp;
    cout<<"After swapping A is : "<<a<<" and B is : "<<b<<"\n";
	return 0;
}
