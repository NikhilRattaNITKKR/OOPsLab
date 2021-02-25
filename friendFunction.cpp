#include<iostream>
using namespace std;

class A{
private:
int x;
int y;

public:
	A(){
		x=1;
		y=2;
	}
  void showX(){
    cout<<x;
  }
	friend void fun(A);
};
 void fun(A x){

		cout<<x.x<<endl;
    x.x++;
    cout<<x.x<<endl;
    
	}
class B{
	private:
		int z;
	public:

};

int main(){
	A a;
	fun(a);
  a.showX();
return 0;
}
