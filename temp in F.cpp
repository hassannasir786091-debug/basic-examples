#include <iostream>
using namespace std;

int main() {
    float C, F;

    cout << "Enter temperature in Celsius: ";
    cin >> C;

    F = C * 9 / 5 + 32;

    cout << "Temperature in Fahrenheit = " << F << endl;

    return 0;
}
