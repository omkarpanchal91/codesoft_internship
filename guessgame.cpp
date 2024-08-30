#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    
    srand(time(0)); 

    
    int number_to_guess = rand() % 100 + 1; 
    int guess = 0;

    cout << "can you guess random number between 1 and 100." << endl;
    

    
    while (guess != number_to_guess) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < number_to_guess) {
            cout << "you entered smaller number! Try again." << endl;
        } else if (guess > number_to_guess) {
            cout << "you entered bigger number! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number." << endl;
        }
    }

    return 0;
}
