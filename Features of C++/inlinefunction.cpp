#include <iostream>
using namespace std;


inline float netPayment(float salary) {
    return salary - (salary * 0.10);
}

int main() {
    float salary;

    cout << "Enter employee salary: ";
    cin >> salary;

    cout << "Net payment to the employee: " << netPayment(salary) << endl;

    return 0;
}

