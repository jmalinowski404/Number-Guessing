#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0)); // seed random number generator with current time

    int numberToGuess = rand() % 100 + 1; // generate a random number between 1 and 100
    int numberOfGuesses = 0;
    int guess;

    cout << "Welcome to the number guessing game!" << endl;

    do {
        cout << "Enter your guess (1-100): ";
        cin >> guess;

        if (guess < 1 || guess > 100) {
            cout << "Invalid guess. Please enter a number between 1 and 100." << endl;
            continue; // skip to next iteration of loop
        }

        numberOfGuesses++;

        if (guess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else if (guess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << numberOfGuesses << " guesses." << endl;
        }
    } while (guess != numberToGuess);

    cout << "Thanks for playing!" << endl;

    return 0;
}