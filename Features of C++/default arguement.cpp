#include<iostream>

using namespace std;

float newsalary(float salary, int incre=12)
{
    return salary+0.01*incre*salary;
}

int main()
{
float chief_executive_officer = 35000;
float information_officer = 25000;
float system_analyst= 24000;
float programmer =18000;

cout<<"Upadated Salary in 2010 :"<<endl;
cout<<"Chief Executive Officer = Rs "<< newsalary(chief_executive_officer , 9)<<endl;
cout<<"Information Officer = Rs "<< newsalary(information_officer, 10)<<endl;
cout<<"System Analyst = Rs "<< newsalary(system_analyst)<<endl;
cout<<"Programmer = Rs "<< newsalary(programmer)<<endl;
return 0;
}

