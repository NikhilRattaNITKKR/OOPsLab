#include<iostream>
using namespace std;

class A{
private:
int x;
int y;

public:
	friend class B;

	A(){
		x=1;
		y=2;
	}
};
class B{
	private:
		int z;
	public:
		void bigger(A& a){
			int c;
			if(a.x>a.y){
				cout<<a.x;
			}
			else{
				cout<<a.y;
			}

		}
};

int main(){
A a;
B b;
b.bigger(a);
return 0;
}
