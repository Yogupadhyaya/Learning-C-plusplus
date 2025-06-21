//
Create a class called carpark that has int data member for car id, int data member for charge/hour, and float data member for the parked time. Make functions to set data members and show the charges and parked hours of the corresponding car id. Make functions for setting and showing the data members. Member function should be called from other functions.

#include<iostream>
void access();
using namespace std;
class carpark
{
private:
    int carid;
    int chargeperhour;
    float parkedtime;

public:
    void setdata(int carid,int chargeperhour, float parkedtime)
    {
        this->carid=carid;
        this->chargeperhour=chargeperhour;
        this->parkedtime=parkedtime;
    }
    void showdata(){
        cout << "Car ID: " << carid << endl;
        cout << "Parked Time: " << parkedtime << " hours" << endl;
        cout << "Charge per Hour: Rs. " << chargeperhour << endl;
        cout << "Total Charges: Rs. " << chargeperhour*parkedtime << endl;
    }
};
int main()
{
access();
}
void access()
{
    carpark car;
    int id, charge;
    float time;
    cout << "Enter Car ID: ";
    cin >> id;
    cout << "Enter Charge per Hour: ";
    cin >> charge;
    cout << "Enter Parked Time (in hours): ";
    cin >> time;
    car.setdata(id, charge, time);
    cout << "\nCar Parking Details:\n";
    car.showdata();
}
