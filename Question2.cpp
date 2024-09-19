/*Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked,
Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. (Use
Default values for Pay_Rate Rs. 500 per hours)*/

#include<iostream>
using namespace std;

//create worker class
class Worker{
	private:
		//attributes
		string Worker_Name;
		float No_Of_Hours_Worked,Pay_Rate,Salary;
	
	    //methods
	public:
		//default constructor
		Worker(){
			Pay_Rate=500;
		}
		
		void info(){
			cout<<"\nEnter worker name :";
			getline(cin,Worker_Name);
			cout<<"\nEnter Number of hours worked : ";
			cin>>No_Of_Hours_Worked;
			cout<<"Pay Rate : ";
			cin>>Pay_Rate;
			
		}
		void display(){
		
			cout<<"\nWorker Payment Receipt";
			cout<<"\nWorker Name : "<<Worker_Name;
			cout<<"\nNumber of Hours worked : "<<No_Of_Hours_Worked;
			cout<<"\nPay rate : "<<Pay_Rate<<"Rs.";
			cout<<"----------------------------------------";
			cout<<"\nSalary is "<<No_Of_Hours_Worked*Pay_Rate;
		}
		
	
		void displayInfo(string w,float h,float r=500){
			Worker_Name=w;
			No_Of_Hours_Worked=h;
			Pay_Rate=r;
			
			cout<<"\n-----------------------------------------";
			cout<<"\nWorker Payment Receipt";
			cout<<"\nWorker Name : "<<Worker_Name;
			cout<<"\nNumber of Hours worked : "<<No_Of_Hours_Worked;
			cout<<"\nPay rate : "<<Pay_Rate<<"Rs.";
			cout<<"\n----------------------------------------";
			cout<<"\nSalary is "<<No_Of_Hours_Worked*Pay_Rate;
		}
};
int main(){
	Worker anu;
//	anu.info();
//	anu.display();
	anu.displayInfo("Anu",200,240);
}

/*
output:

Enter worker name :Mayuri Aditya Badgujar

Enter Number of hours worked : 240
Pay Rate : 200

Worker Payment Receipt
Worker Name : Mayuri Aditya Badgujar
Number of Hours worked : 240
Pay rate : 200Rs.----------------------------------------
Salary is 48000
-----------------------------------------
Worker Payment Receipt
Worker Name : Anu
Number of Hours worked : 200
Pay rate : 240Rs.
----------------------------------------
Salary is 48000
--------------------------------
*/