#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    int revVctr[8];               // User values
    int i;                        // Loop index
    vector<int> hold(8);


    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> revVctr[i];
    }

    // Reverse
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        hold[i] = revVctr[NUM_ELEMENTS - 1 - i];
    }

    // Swap
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        revVctr[i] = hold[i];
    }



    // Print values
    cout << endl << "New values: ";
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << revVctr[i];
    }


    cout << endl;

    return 0;
}