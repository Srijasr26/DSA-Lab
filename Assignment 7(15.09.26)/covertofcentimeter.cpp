#include <iostream>
using namespace std;

int main() {
    float cm, meter, kilometer;

    cout << "Enter length in centimeters: ";
    cin >> cm;

    meter = cm / 100;
    kilometer = cm / 100000;

    cout << "Length in meters = " << meter << " m" << endl;
    cout << "Length in kilometers = " << kilometer << " km";

    return 0;
}