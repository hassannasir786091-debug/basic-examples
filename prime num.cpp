#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << "Not Prime";
    }
    else if (num == 2 || num == 3) {
        cout << "Prime";
    }
    else if (num % 2 == 0 || num % 3 == 0) {
        cout << "Not Prime";
    }
    else {
        cout << "Prime";
    }

    return 0;
}
