
//Assume that you want to check whether the number is prime or not. Write a program that asks for numbers repeatedly. When it finishes checking a number the program asks if the user wants to do another calculation. The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.#include<iostream>
using namespace std;
 class Prime{
     public:
     int pnumber;

     void input()
     {
         cout<<"Enter the number"<<endl;
         cin>>pnumber;
     }

     string checkprime()
     {
         int count=0;
         for(int i=2;i<pnumber;i++)
         {
             if(pnumber%i==0)
             {
                 count++;
                 break;
             }
           i++;
         }
         if(count==0)
         {
             return "Prime";
         }
         else{
            return "Composite";
         }

     }


 };
int main()
{
    Prime p;
    char ch='y';
    while(ch!='n')
    {
    p.input();
   cout<<"The number is " << p.checkprime()<<endl;
    cout<<"DO you want to check again?"<<endl;
   cin>>ch;
    }

}
