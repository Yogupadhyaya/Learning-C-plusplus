//Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa using the basic concept of class and object. Make separate classes for Celsius and Fahrenheit which will have the private members that hold the temperature value and make conversion functions in each class for conversion from one to another. For example, you need to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.

#include<iostream>
using namespace std;
class celsius{
private:
    float cdegree;
    public:
    void celsiusset()
    {
        cout<<"Enter Celsius degree"<<endl;
        cin>>cdegree;
    }
    float toFarenheit()
    {
        return cdegree*1.8+32;
    }

};
class farenheit{
private:
    float fdegree;

    public:
    void farenheitset()
    {
        cout<<"Enter Farenheit degree"<<endl;
        cin>>fdegree;
    }
    float toCelsius()
    {
        return ((fdegree-32)/1.8);
    }

};
int main()
{
    celsius cd;
    farenheit fd;
    cd.celsiusset();
    fd.farenheitset();
    cout<<"Temperature in farenheit scale: "<<cd.toFarenheit()<<endl;
    cout<<"Temperature in celsius scale : "<<fd.toCelsius()<<endl;

}
