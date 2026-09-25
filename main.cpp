#include <iostream>
using namespace std;

int main() {
    int choice;
    double distance, fare;

    cout << "Welcome! Let's calculate your Grab ride fare." << endl;
    cout << endl;
    cout << "1. JustGrab" << endl;
    cout << "2. GrabCar" << endl;
    cout << "3. GrabPremium" << endl;
    cout << "Enter choice (1-3): ";
    cin >> choice;

    cout << "Enter distance (km): ";
    cin >> distance;

    if (choice == 1) {
        fare = 3.0 + (1.2 * distance);   // JustGrab
    }
    else if (choice == 2) {
        fare = 4.5 + (1.5 * distance);   // GrabCar
    }
    else if (choice == 3) {
        fare = 7.0 + (2.2 * distance);   // GrabPremium
    }
    else {
        fare = 0;
    }

    cout << "Estimated fare: RM " << fare << endl;

    return 0;
}
