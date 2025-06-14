#include<iostream>

using namespace std;

void convert()
{
    float feet;
    cout<<"Enter the feet: "<<endl;
    cin>>feet;
    float inch=feet *12;
    cout<<"Inch = "<<inch<<endl;

}
float convert(float feet)
{
    float inch=feet *12;
    return inch;
}
void convert(float feet, float &inch)
{
    inch = 12*feet;
}

int main()
{
    //With No arguement
    convert();

    //With one arguement
    float feet;
    cout<<"Enter the feet: "<<endl;
    cin>>feet;
    float inch = convert(feet);
    cout<<"Inch = "<<inch<<endl;

    // With two arguements

    cout<<"Enter the feet: "<<endl;
    cin>>feet;
    convert(feet, inch);
    cout<<"Inch = "<<inch<<endl;

}
