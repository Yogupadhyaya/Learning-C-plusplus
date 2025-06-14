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
