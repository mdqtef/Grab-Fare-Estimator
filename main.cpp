#include <iostream>
using namespace std;

int main() {
    int choice;
    double distance, fare;

    cout << "1. JustGrab" << endl;
    cout << "2. GrabCar" << endl;
    cout << "3. GrabPremium" << endl;
    cout << "Enter choice (1-3): ";
    cin >> choice;

    cout << "Enter distance (km): ";
    cin >> distance;

    fare = 3.0 + (1.2 * distance);   // temporary - only JustGrab for now

    cout << "Estimated fare: RM " << fare << endl;

    return 0;
}
