
#include <iostream>
using namespace std;

int main() {
    const int SENTINEL = -99;

    int number;
    int smallest = 0;
    int largest = 0;
    bool has_data = false;

    cout << "Enter integers (-99 to stop): ";
    cin >> number;

    while (number != SENTINEL) {
        if (!has_data) {
            smallest = number;
            largest = number;
            has_data = true;
        } else {
            if (number < smallest) {
                smallest = number;
            }

            if (number > largest) {
                largest = number;
            }
        }

        cin >> number;
    }

    if (has_data) {
        cout << "Smallest: " << smallest << endl;
        cout << "Largest: " << largest << endl;
    } else {
        cout << "No data values were entered." << endl;
    }

    return 0;
}

