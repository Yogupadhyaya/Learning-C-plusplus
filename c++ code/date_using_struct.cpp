#include<iostream>
#include<iomanip>
using namespace std;
struct date{
int day;
int month;
int year;
};
void display(struct date);
int main()
{
    date d1;
   cout<<"Enter the month, day and year"<<endl;
   cin>>d1.month>>d1.day>>d1.year;
    display(d1);
    return 0;

}

void display(struct date d)
{
    cout<<"Date: "<<setfill('0')<<setw(2)<<d.month<<"/"<<setfill('0')<<setw(2)<<d.day<<"/"<<d.year<<endl;
}

