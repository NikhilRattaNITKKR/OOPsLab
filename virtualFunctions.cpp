#include<iostream>
using namespace std;

class father{
	protected:
	int age;
	public:
		father(int fage){
			age=fage;
		}
		virtual void iam(){
			cout<<"I am the father"<<endl<<"My age is : "<<age<<endl;
		}

};

class son:public father{
public:
	son(int sage,int fage):father(fage){
		age=sage;
	}
	void iam(){
		cout<<"I a the son"<<endl<<"My age is : "<<age<<endl;
	}
};

class daughter:public father{
public:
		daughter(int dage,int fage):father(fage){
		age=dage;
	}
	void iam(){
		cout<<"I am the daughter"<<endl<<"My age is : "<<age<<endl;
	}
};

int main(){
	father *ptr,F(30);
  	son S(10,30);
  	daughter D(8,30);
  	ptr=&F;
  	ptr->iam();
  	ptr=&S;
  	ptr->iam();
  	ptr=&D;
  	ptr->iam();

	return 0;
}
