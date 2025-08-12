// Lesson 35 - (05/15/2025)
// This program implements a number guessing game where the player chooses a difficulty.
// level (Easy, Medium, or Hard) which determines the number of attempts available.

#include <iostream>
#include <cstdlib>  // abs
#include <iomanip>  // fixed and setprecision

#define SECRET 50

using namespace std;

int main() {
    int num_try = 0, tries = 0, num, diff;
    double score = 1000;
    bool menu = true;

    cout << "======== SECRET NUMBER ==========" << endl;
    cout << "\nChoose the Difficulty...\n\n| 1 - Easy\n| 2 - Medium\n| 3 - Hard" << endl;

    while (menu) {
        cin >> diff;
        switch (diff) {
            case 1:
                tries = 15;
                menu = false;
                break;
            case 2:
                tries = 10;
                menu = false;
                break;
            case 3:
                tries = 5;
                menu = false;
                break;
            default:
                cout << "Please make a valid choice!" << endl;
                break;
        }
    }

    while (num != SECRET && num_try < tries) {
        cout << "\n-------------------------\n ---- Attempt " << num_try + 1 << " ---- " << endl;
        cin >> num;
        num_try++;

        if (num > SECRET) {
            cout << "The secret number is lower..." << endl;
        }
        if (num < SECRET) {
            cout << "The secret number is higher..." << endl;
        }

        score -= abs(num - SECRET) / 2.0;
        // cout << "(Score - " << score << ")" << endl; // Debug
    }

    cout << fixed << setprecision(2);
    cout << "\n--------------------------------" << endl;

    if (num == SECRET) {
        cout << "Congratulations! You guessed it!" << endl;
    } else {
        cout << "Your attempts are over..." << endl;
        cout << "The secret number was " << SECRET << "!" << endl;
    }

    cout << "Score - " << score << endl;
}
