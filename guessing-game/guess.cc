#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

enum class Difficulty {
    EASY,
    MEDIUM,
    HARD
};

Difficulty getDifficultyFromUser() {
    int choice;
    cout << "Select Difficulty:\n";
    cout << "1. Easy\n2. Medium\n3. Hard\n";
    cout << "Enter choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1: return Difficulty::EASY;
        case 2: return Difficulty::MEDIUM;
        case 3: return Difficulty::HARD;
        default:
            cout << "Invalid choice! Setting to Easy.\n";
            return Difficulty::EASY;
    }
}

int main(){
    srand(time(0));

    cout << "Welcome to the Guessing Game!\n";
    Difficulty difficulty = getDifficultyFromUser();
    
    // Generate random number based on difficulty
    int randomNumber;
    switch(difficulty) {
        case Difficulty::EASY:
            randomNumber = rand() % 10 + 1;
            cout << "Easy mode: Guess a number between 1-10\n";
            break;
        case Difficulty::MEDIUM:
            randomNumber = rand() % 50 + 1;
            cout << "Medium mode: Guess a number between 1-50\n";
            break;
        case Difficulty::HARD:
            randomNumber = rand() % 100 + 1;
            cout << "Hard mode: Guess a number between 1-100\n";
            break;
    }
    
    int guess = 0;
    int attempts = 0;
    const int attemptsLimit = 5;
    
    cout << "You have " << attemptsLimit << " attempts. Good luck!\n";
    
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        
        if (guess == randomNumber) {
            cout << "You Win! You guessed it in " << attempts << " attempt(s)!\n";
            break;
        } else if (guess < randomNumber) {
            cout << "Too low! ";
        } else {
            cout << "Too high! ";
        }
        
        if (attempts < attemptsLimit) {
            cout << "Attempts left: " << (attemptsLimit - attempts) << "\n";
        } else {
            cout << "\nYou ran out of attempts! The number was " << randomNumber << endl;
            break;
        }
    } while (attempts < attemptsLimit);
    
    return 0;
}