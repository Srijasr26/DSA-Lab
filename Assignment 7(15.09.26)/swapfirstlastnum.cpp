#include <iostream>
using namespace std;

int main() {
    int n, first, last, digits, power, middle, result;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 10) {
        cout << "Number after swapping: " << n;
        return 0;
    }

    last = n % 10;

    // Find number of digits
    int temp = n;
    digits = 0;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    power = 1;
    for (int i = 1; i < digits; i++) {
        power *= 10;
    }

    first = n / power;

    // Remove first and last digits
    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    cout << "Number after swapping: " << result;

    return 0;
}