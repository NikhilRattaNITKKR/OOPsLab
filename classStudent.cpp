// create a class student and calculate their marks

#include <iostream>
using namespace std;

class Student{
private:
  string name;
  int marks;
  string grade;
public:
  Student(){
    name="";
    marks=0;
  }
  void getAll();
  void calculateMarks();
  void displayAll();
};
void Student::getAll(){
  cout<<"\nEnter Student Name : ";
  cin>>name;
  cout<<"\n Enter marks : ";
  cin>>marks;
}
void Student::calculateMarks(){
  if(marks>=85)
  grade="A+";
  else if(marks>=75)
  grade="A";
  else if(marks>=65)
  grade="B";
  else if(marks>=50)
  grade="C";
  else if(marks>=40)
  grade="D";
  else
  grade="F";
}
void Student::displayAll(){
  cout<<"Name : "<<name<<"\tMarks : "<<marks<<"\tGrade : "<<grade<<endl;
}

int main(){
  int n=0;
  cout<<"Enter number of Students\n";
  cin>>n;
  Student stud[n];
  for (int i = 0; i < n; i++) {
  stud[i].getAll();
  stud[i].calculateMarks();
  }
  for (int i = 0; i < n; i++) {
  stud[i].displayAll();
  }
  return 0;
}
