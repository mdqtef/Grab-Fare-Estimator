#include <iostream>
using namespace std;

int main() {
    double distance, fare;

    cout << "Enter distance (km): ";
    cin >> distance;

    fare = 3.0 + (1.2 * distance);

    cout << "Estimated fare: RM " << fare << endl;

    return 0;
}
