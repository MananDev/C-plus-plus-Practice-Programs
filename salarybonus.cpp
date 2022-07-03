#include<iostream>

using namespace std;

int main()
{
 float salary,bonus;
 int grade;
 
 cout<<"Enter salary of Employee=";
 cin>>salary;
 cout<<"Enter Years of service=";
 cin>>grade;

 if(grade>=5) {
   bonus = salary * 5.0/100.0;
}
   else {
   bonus = salary * 10.0/100.0;
}
 salary = salary + bonus;
 cout<<"The Total salary of Employee = "<<salary;


 }