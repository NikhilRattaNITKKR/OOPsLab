#include<iostream>
using namespace std;

class Switch{
	protected:
		string state;
	public:
		Switch(){
			state="OFF";
		}
		void changeState(){
			if(state=="OFF"){
				state="ON";
			}else{
				state="OFF";
			}
			cout<<"\nState Changed";
		}
		void displayState(){
			cout<<"\n The state is : "<<state;
		}
};

class temp_gauge{
	protected:
		float temp;
	public:
		void inputTemp(){
			cout<<"\n Enter Current Temperature :";
			cin>>temp;
		}
		void displayTemp(){
			cout<<"\n The Temperature is :"<<temp;
		}
};

class thermostat:public Switch,public temp_gauge
{
	private:
		float requiredTemp;
	public:
		void getRequiredTemp(){
			cout<<"\nEnter Required Temp :";
			cin>>requiredTemp;
		}
	void decideState(){
		inputTemp();
		if(temp>=0.95*requiredTemp && temp<=1.05*requiredTemp ){
			changeState();
		}else {
			cout<<"\n State unchanged";
		}
		displayState();
	}
};
int main(){
	thermostat T;
	T.getRequiredTemp();
	T.decideState();
	return 0;
}
