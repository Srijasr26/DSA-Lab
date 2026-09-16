#include <iostream>
using namespace std;

int main() {
    int a[7];

    cout << "Enter seven numbers: ";
    for (int i = 0; i < 7; i++) {
        cin >> a[i];
    }

    // Sorting in descending order
    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 7; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "Numbers in descending order: ";
    for (int i = 0; i < 7; i++) {
        cout << a[i] << " ";
    }

    return 0;
}