#include<iostream>

using namespace std;

float &temperature(float &t1, float &t2)
{

    if(t1>t2)
    {
        return t1;
    }
    else{
        return t2;
    }
}

int main()
{
    float t1,t2,value;
    cout<<"Enter two temperature"<<endl;
    cin>>t1>>t2;
    cout<<"Enter any random value to be set in place of largest temperature"<<endl;
    cin>>value;
    temperature(t1,t2)=value;
    cout<<"t1 and t2 are respectively : "<<t1<<"\t"<<t2<<endl;
    return 0;
}
