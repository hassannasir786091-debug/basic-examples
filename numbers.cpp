#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    if (op == '+') {
        cout << "Result = " << num1 + num2;
    }
    else if (op == '-') {
        cout << "Result = " << num1 - num2;
    }
    else if (op == '*') {
        cout << "Result = " << num1 * num2;
    }
    else if (op == '/') {
        if (num2 == 0) {
            cout << "Cannot divide by zero";
        }
        else {
            cout << "Result = " << num1 / num2;
        }
    }
    else {
        cout << "Invalid operator";
    }

    return 0;
}
