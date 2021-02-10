//WAP create a virtual TollBooth

#include <iostream>
using namespace std;

class TollBooth{
private:
  int totalCars;
  int payingCars;
  int nonPayingCars;
  int totalAmount;
public:
  TollBooth(){
     totalCars=0;
     payingCars=0;
     nonPayingCars=0;
     totalAmount=0;
  }
  void tollPaid();
  void tollNotPaid();
  void display();
};
void TollBooth::tollPaid(){
  cout<<"Car paid a toll of 10\n";
  totalCars++;
  payingCars++;
  totalAmount+=10;
}
void TollBooth::tollNotPaid(){
  cout<<"Car didnt paid toll\n";
  totalCars++;
  nonPayingCars++;
}
void TollBooth::display(){
  cout<<"Total Cars : "<<totalCars<<endl;
  cout<<"Paying Cars : "<<payingCars<<endl;
  cout<<"Non Paying Cars : "<<nonPayingCars<<endl;
  cout<<"Total Amount Collected : "<<totalAmount<<endl;
}
int main(){
  char ch='y';
  TollBooth t;
  do{
    int choice;
    cout<<"Select the type of car\n";
    cout<<"1. Paying Cars\n";
    cout<<"2. Non Paying Cars\n";
    cin>>choice;
    switch(choice){
      case 1:t.tollPaid();
      break;
      case 2:t.tollNotPaid();
      break;
      default: cout<<"Wrong Choice\n";
    }
    cout<<"Enter your choice\n";
    cin>>ch;
  }while(ch=='y');
t.display();
  return 0;
}
