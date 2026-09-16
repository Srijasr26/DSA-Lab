#include <iostream>
using namespace std;

int main() {
    float angle1, angle2, angle3;

    cout << "Enter two angles: ";
    cin >> angle1 >> angle2;

    angle3 = 180 - (angle1 + angle2);

    cout << "Third angle = " << angle3 << " degrees";

    return 0;
}