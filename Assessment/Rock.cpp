// C ++ Programming Assessment Test
// • Write a program to demonstrate a Rock Paper Scissor Game.
// • Display the Menu using appropriate codes.
// • For Menu kinds of Programming , use the core logic of Loops/conditional statements.
// • You need to strictly follow the syntaxes’s of that logic which you are using.
// • Write the necessary comments for better understanding to you as well as to the
// faculty.
// Project Requirements :
// • Invoke the particular Method/Function through object , in which you are writing your
// logic.
// • Use this function :
// • srand(time(0));
// • (rand()%3)+1; -> Generating for random no.s from computer’s end.
// • Use library header files i.e #include<stdlib.h> and #include<ctime> for above logic if
// necessary.
// • Add the necessary comments for better understanding of code.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int userChoice, computerChoice;
    srand(time(0));  // Seed for random number generation

    cout << "Welcome to Rock, Paper, Scissors game!" << endl;
    cout << "Enter your choice (1 - Rock, 2 - Paper, 3 - Scissors): ";
    cin >> userChoice;

    // Generate random number for computer's choice
    computerChoice = rand() % 3 + 1;

    cout << "You chose: ";
    switch (userChoice) {
        case 1:
            cout << "Rock" << endl;
            break;
        case 2:
            cout << "Paper" << endl;
            break;
        case 3:
            cout << "Scissors" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 0;
    }

    cout << "Computer chose: ";
    switch (computerChoice) {
        case 1:
            cout << "Rock" << endl;
            break;
        case 2:
            cout << "Paper" << endl;
            break;
        case 3:
            cout << "Scissors" << endl;
            break;
    }

    // Determine the winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 1 && computerChoice == 3) || 
               (userChoice == 2 && computerChoice == 1) || 
               (userChoice == 3 && computerChoice == 2)) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }

    return 0;
}

