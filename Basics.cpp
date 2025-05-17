//USe Ctrl + Shift + X to uncomment any part in codeblock

// Basic Program

/* #include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << "Yogendra Sharma Upadhyaya"<< endl;

    return 0;
}
*/



// Drawing a Shape in Console

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cout <<"    /\\" << endl;
//    cout <<"   /  \\" << endl;
//    cout <<"  /    \\" << endl;
//    cout <<" /      \\" << endl;
//    cout <<"/________\\" << endl;
//
//    return 0;
//}




// Variable in c++

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//    string a="Yogendra";
//    int integervalue;
//    integervalue=18;
//    cout <<"My name is "<<a<<" and my age is "<<integervalue<<endl;
//}




// Working with Strings

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//    string name="Yogendra is a learner";
//    cout<<name.length()<<endl;
//    cout <<name.find("learner",0)<< endl;
//    cout <<name.substr(14,20)<<endl;
//    cout << name[14]<<endl;
//    name[0]='J';
//    cout<<name;
//    return 0;
//}




// Working with Number:

//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//int main()
//{
//    int wnum=95;
//    float dnum=95.6;
//    cout << 5 << endl;
//    cout << 5+7 <<endl;
//    cout <<4.3+4<<endl;
//    cout << 10/3<<endl;
//    cout <<10/3.0<<endl;
//    cout << 10%2<<endl;
//    cout <<pow(2,5)<<endl;
//    cout <<sqrt(36)<<endl;
//    cout <<round(4.3)<<endl;
//    cout <<round(4.7)<<endl;
//    cout <<ceil(4.1)<<endl;
//    cout <<floor(4.6)<<endl;
//    cout <<"The highest number between 5 and 10 is \t"<<fmax(5,10) <<endl;
//    cout <<wnum<<endl;
//    cout <<dnum<<endl;
//    wnum++;
//    cout <<wnum<<endl;
//    cout << wnum+dnum;
//    return 0;
//}





//Taking User input
//#include <iostream>
//#include <limits> // for numeric_limits
//using namespace std;
//
//int main() {
//    int age;
//    string name, name1;
//
//    cout << "Enter your full name: " << endl;
//    cin >> name1;  // only gets the first word
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // clear the rest
//    /* when you enter more than one word in cin then it takes only one and \n gets stored in buffer so you need to clear that again this function cin ignore */
//
//    cout << "Enter your name again: " << endl;
//    getline(cin, name);  // this now works correctly
//
//    cout << "Enter your age: " << endl;
//    cin >> age;
//
//    cout << "Your name is " << name1 << " and you are " << age << " years old." << endl;
//    cout << "Your name is " << name << " and you are " << age << " years old." << endl;
//
//    return 0;
//}




// Calculation on  two numbers entered by user
// #include<iostream>
//  using namespace std;
//
//  int main()
//  {
//      double num1, num2;
//      cout <<"Enter two numbers"<<endl;
//      cin>>num1>>num2;
//      cout <<"The sum of two number is "<<num1+ num2;
//      return 0;
//  }




// Array

// Same as in C
//#include <iostream>
//using namespace std;
//
//int main() {
//    // Declare an array of 5 integers
//    int numbers[5] = {10, 20, 30, 40, 50};
//
//    // Access and print the array elements using a loop
//    cout << "Array elements: ";
//    for (int i = 0; i < 5; i++) {
//        cout << numbers[i] << " ";
//    }
//
//    return 0;
//}


// Function in C++

//#include <iostream>
//using namespace std;
//
//// Function definition
//int add(int a, int b) {
//    return a + b;
//}
//
//int main() {
//    int num1, num2;
//    cout << "Enter two numbers: ";
//    cin >> num1 >> num2;
//
//    // Function call
//    int sum = add(num1, num2);
//
//    cout << "The sum is: " << sum << endl;
//
//    return 0;
//}




// Direct Comparison of string is possible in c++
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string a = "apple";
//    string b = "banana";
//
//    if (a == b) {
//        cout << "Strings are equal." << endl;
//    } else {
//        cout << "Strings are not equal." << endl;
//    }
//
//    return 0;
//}


// Direct Passing of string from one function to another with return statement is possible

//#include <iostream>
//#include <string>
//using namespace std;
//
//string greet() {
//    return "Hello from function!";
//}
//
//int main() {
//    string message = greet();
//    cout << message << endl;
//    return 0;
//}



//IF statement is basic and same as in c so no code of that

// Switch staatement in c++

//#include<iostream>
//
// using namespace std;
// string getDayOfWeek(int dayNum)
// {
//     string dayName;
//     switch(dayNum)
//     {
//     case 1:
//        dayName = "Sunday";
//        break;
//    case 2:
//        dayName = "Monday";
//        break;
//    case 3:
//        dayName = "Tuesday";
//        break;
//    case 4:
//        dayName = "Wednesday";
//        break;
//    case 5:
//        dayName = "Thursday";
//        break;
//    case 6:
//        dayName = "Friday";
//        break;
//    case 7:
//        dayName = "Saturday";
//        break;
//    default:
//        dayName="Invalid Input";
//     }
//     return dayName;
// }
// int main()
// {
//     int dayNum;
//     cout <<"Enter the day in Num";
//     cin >>dayNum;
//     cout <<getDayOfWeek(dayNum);
//     return 0;
// }




//For loop in c++

//#include <iostream>
//using namespace std;
//
//int main() {
//    // Print numbers from 1 to 5 using for loop
//    for (int i = 1; i <= 5; i++) {
//        cout << "For loop iteration: " << i << endl;
//    }
//    return 0;
//}





// whlle loop in c++
//#include <iostream>
//using namespace std;
//
//int main() {
//    int i = 1;
//    // Print numbers from 1 to 5 using while loop
//    while (i <= 5) {
//        cout << "While loop iteration: " << i << endl;
//        i++;
//    }
//    return 0;
//}




// Do while loop in c++

//#include <iostream>
//using namespace std;
//
//int main() {
//    int i = 1;
//    // Print numbers from 1 to 5 using do-while loop
//    do {
//        cout << "Do-while loop iteration: " << i << endl;
//        i++;
//    } while (i <= 5);
//
//    return 0;
//}




// Making Exponent function

//#include<iostream>
//
//using namespace std;
//
//int power(int,int);
//int main()
//{
//    int x,y;
//    cout <<"Enter the values"<<endl;
//    cin>>x>>y;
//    cout << "Result: "<<power(x,y);
//    return 0;
//}
//int power(int base,int expo)
//{
//    int result=1;
//    for(int i=1;i<=expo;i++)
//    {
//        result = result *base;
//    }
//    return result;
//}



//2D array in C++ with nested loops

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//    int i,j;
//    int arr[3][2]={
//            {1,2},
//            {3,4},
//            {5,6}
//
//    };
//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<2;j++)
//        {
//            cout << " "<<arr[i][j];
//
//        }
//        cout <<endl;
//    }
//    return 0;
//}



//Pointer in c++

//#include <iostream>
//using namespace std;
//
//int main() {
//    int num = 42;       // Declare an integer
//    int *ptr = &num;    // Pointer 'ptr' stores the address of 'num'
//
//    cout << "Value of num: " << num << endl;   // Output: 42
//    cout << "Address of num: " << &num << endl; // Address of num (pointer)
//    cout << "Value of ptr: " << ptr << endl;   // Memory address stored in ptr
//    cout << "Value pointed to by ptr: " << *ptr << endl; // Dereferencing ptr
//
//    return 0;
//}


//Objects and Classes

//#include <iostream>
//using namespace std;
//
//class Student {
//public:
//    string name;  // public variable
//    void sayHello() {  // public method
//        cout << "Hello, my name is " << name << endl;
//    }
//};
//
//int main() {
//    Student s1;
//    s1.name = "Yogendra";  // Accessing public variable
//    s1.sayHello();         // Calling public method
//
//    return 0;
//}

//Since the name and the given function in class is declared as public it can be accessed directly from the main function i.e outside the class.
//If public wasn't used, we can't directly call the member of class from other function.

//COnstructor : A constructor is a special function in a class that is automatically called when an object of that class is created. It is used to initialize objects.

//#include<iostream>
//
//using namespace std;
//
//class Student{
//public:
//    string name;
//    int clas;
//    int roll;
//
//    Student(string n, int c, int r) //constructor
//    {
//        name = n;
//        clas = c;
//        roll = r;
//    }
//void showdetails()
//    {
//        cout <<name<<endl;
//        cout <<clas<<endl;
//        cout <<roll<<endl;
//
//    }
//};
//int main()
//{
//    Student s1("Yogendra",12,42);
//    cout << s1.name<<endl;
//    cout << s1.clas<<endl;
//    cout << s1.roll<<endl;
//    s1.showdetails();
//    return 0;
//}

// showdetails() is a object function thus it is the function defined in the class. It has certain return type .





// Getter and Setter in C++ : It is mainly used to acess the private members in c++.

//#include <iostream>
//using namespace std;

//class Student {
//private:
//    string name;
//    int roll;
//
//public:
//    // Setter for name
//    void setName(string n) {
//        name = n;
//    }
//
//    // Getter for name
//    string getName() {
//        return name;
//    }
//
//    // Setter for roll
//    void setRoll(int r) {
//        if (r > 0)  // simple validation
//            roll = r;
//    }
//
//    // Getter for roll
//    int getRoll() {
//        return roll;
//    }
//};
//
//int main() {
//    Student s1;
//    s1.setName("Yogendra");     // setting name
//    s1.setRoll(42);             // setting roll
//
//    cout << "Name: " << s1.getName() << endl;
//    cout << "Roll: " << s1.getRoll() << endl;
//
//    return 0;
//}

//Example of inheritance

//#include <iostream>
//using namespace std;
//
//class vehicle {
//public:
//    string color;
//    string purpose;
//
//    vehicle(string c, string p) {
//        color = c;
//        purpose = p;
//    }
//};
//
//class car : public vehicle {
//public:
//    int wheel;
//
//    // Constructor calls base class constructor using initializer list
//    car(string c, string p, int w) : vehicle(c, p) {
//        wheel = w;
//    }
//
//    void showdetails() {
//        cout << "Color: " << color << endl;
//        cout << "Purpose: " << purpose << endl;
//        cout << "Wheels: " << wheel << endl;
//    }
//};
//
//int main() {
//    car c("Red", "Move", 4);  // Object creation
//    c.showdetails();          // Correct function call
//    return 0;
//}
