#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 10 + 1;
    int guess;
    int attempts = 1;
    cout << "\t\t\t________________Welcome to the Number Guessing Game!________________" << endl;
    cout << "\n\t\t\t\tTry to guess the secret number between 1 and 10." << endl;

    while (true) {
        cout << "\n\t\t\tEnter your guess: ";
        cin >> guess;
        if (guess == secretNumber) {
            cout << "\n\t\t\t\t\tCongratulations!\n\t\t\tYou guessed the correct number in " << attempts << " attempts!" << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "\n\t\t\t\tToo low. Try again." << endl;
        } else {
            cout << "\n\t\t\t\tToo high. Try again." << endl;
        }
        attempts++;
    }
    return 0;
}

