#include <iostream>
using namespace std;

int main() {
    int testscore[5] = {100, 95, 99, 87, 88};

    // Display initial scores
    for (int i = 0; i < 5; i++) {
        cout << "testscore[" << i << "]: " << testscore[i] << endl;
    }

    // Take user input for the first score
    cout << "Enter a new value for testscore[0]: ";
    cin >> testscore[0];

    // Show final value
    cout << "Final testscore[0]: " << testscore[0] << endl;

    cout << "The array name is " << testscore << endl;

    return 0;
}
