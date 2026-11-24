
#include <iostream>
using namespace std;

int main() {
    const int SENTINEL = -99;

    int number;
    int smallest;
    int largest;
    bool has_data = false;

    cout << "Enter integers (-99 to stop): ";
    cin >> number;

    // Continue reading numbers until the sentinel is entered.
    while (number != SENTINEL) {

        if (!has_data) {
            // Initialize both values using the first valid number.
            smallest = number;
            largest = number;
            has_data = true;
        } else {
            // Update the smallest value when necessary.
            if (number < smallest) {
                smallest = number;
            }

            // Update the largest value when necessary.
            if (number > largest) {
                largest = number;
            }
        }

        cin >> number;
    }

    // Display the results only if valid data was entered.
    if (has_data) {
        cout << "Smallest: " << smallest << endl;
        cout << "Largest: " << largest << endl;
    } else {
        cout << "No data values were entered." << endl;
    }

    return 0;
}
