#include <iostream>
using namespace std;

class Person{
private:
  int age;
  char name[20];
public:
  void getPerson(){
    cout<<"Enter name of the person"<<endl;
    cin>>name;
    cout<<"Enter age"<<endl;
    cin>>age;
  }
  void displayPerson(){
    cout<<"Name of the person : "<<name<<endl;
    cout<<"Age of the person : "<<age<<endl;
  }
};


int main(){
  Person p;
  p.getPerson();
  p.displayPerson();
  return 0;
}
