
//USe Ctrl + Shift + X to uncomment any part in codeblock

// C++ Object Oriented Programming



// Defining class and objects

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Teacher{
//public:
//    //Properties
//    string name;
//    string depart;
//    string subject;
//    double salary;
//    //Methods
//    void showdetails()
//    {
//        cout<<name<<endl;
//        cout<<depart<<endl;
//        cout<<subject<<endl;
//        cout<<salary<<endl;
//    }
//
//};
//
//int main()
//{
//
//    Teacher t1; //declaring objects
//    //accessing class using methods
//    t1.name="Yogendra";
//    t1.depart="BCT";
//    t1.subject="OOP";
//    t1.salary=250000;
//
//    t1.showdetails();
//    return 0;
//}



//Encapsulation:Wrapping up of data and methods in a single unit called class
//Helps in data hiding by using access modifier known as private
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Teacher{
//private://access modifier
//   double salary; // Here salary is hidden or protected and can be accessed only inside this class
//   public://access modifier
//    //Properties
//    string name;
//    string depart;
//    string subject;
//    //Methods
//    void showdetails()
//    {
//        cout<<name<<endl;
//        cout<<depart<<endl;
//        cout<<subject<<endl;
//        cout<<salary<<endl;
//    }
//
//    //Sometime if we need to access or modify private members we make a function in public known as getter and setter;
//    //getter
//    void setsalary(double s)
//    {
//        salary =s;
//    }
//    //setter
//     double getsalary()
//    {
//        return salary;
//    }
//};
//
//int main()
//{
//
//    Teacher t1; //declaring objects
//    //accessing class using methods
//    t1.name="Yogendra";
//    t1.depart="BCT";
//    t1.subject="OOP";
//    t1.setsalary(250000);
//
//    t1.showdetails();
//    cout<<"using salary function"<<endl;
//    cout<<t1.getsalary();
//    return 0;
//}




//Constructor in c++
//#include <iostream>
//using namespace std;
//
//class Student {
//public:
//    string name;
//    int age;
//
//    // Constructor
//    Student(string n, int a) {
//        name = n;
//        age = a;
//    }
//
//    void display() {
//        cout << "Name: " << name << ", Age: " << age << endl;
//    }
//};
//
//int main() {
//    Student s1("Ram", 20); // Constructor is called automatically
//    s1.display();
//
//    return 0;
//}
//



//Constructor using this pointer
// this pointer is such pointer which points to current object

//#include <iostream>
//using namespace std;
//
//class Student {
//public:
//    string name;
//    int age;
//
//    // Constructor
//    Student(string name, int age) {
//        this->name = name; //(*this).name=name
//        (*this).age=age;
//
//        }
//
//    void display() {
//        cout << "Name: " << name << ", Age: " << age << endl;
//    }
//};
//
//int main() {
//    Student s1("Ram", 20); // Constructor is called automatically
//    s1.display();
//
//    return 0;
//}





//Copy constructor: Use to copy the properties of one object to another object
//Default Copy Constructor
//#include <iostream>
//using namespace std;
//
//class Student {
//public:
//    string name;
//    int age;
//
//    // Constructor
//    Student(string n, int a) {
//        name = n;
//        age = a;
//    }
//
//    void display() {
//        cout << "Name: " << name << endl;
//        cout<<" Age:" << age << endl;
//    }
//};
//
//int main() {
//    Student s1("Ram", 20); // Constructor is called automatically
//    s1.display();
//    Student s2(s1);     //Default Copy Constructor
//    s2.display();
//
//    return 0;
//}



//Making Own Copy COnstructor
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    Student(const Student &obj){
    cout<<"I am copy constructor"<<endl;
    name = obj.name;
    age=obj.age;

    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Ram", 20); // Constructor is called automatically
    s1.display();
    Student s2(s1); //Calling custom copy constructor
    s2.display();

    return 0;
}

