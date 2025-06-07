#include<iostream>

using namespace std;

namespace square{
int num;

int fun(int num)
{
    return num*num;
}

}

namespace cube{
int num;

int fun(int num)
{
    return num*num*num;
}

}

int main()
{
    square::num=4;
    cube::num=5;

    cout<<"Cube of 4 is : "<<cube::fun(square::num)<<endl;
    cout<<"Square of 5 is :"<<square::fun(cube::num)<<endl;
    return 0;

}
