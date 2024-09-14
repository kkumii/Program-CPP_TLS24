/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string choices[4] = {"Rock", "Paper", "scissors"};
    int PlayerChoice, ComputerChoice;
    //seed the random number generator
    srand(time(0));
    
    cout << "Let's play Rock, Paper, Scissors!" << endl;
    
    while (true) {
        cout << "Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors,or 4 to quit): ";
        cin >> PlayerChoice;
        
        if (PlayerChoice == 4) {
            cout << "Thank you for playing with me. Goodbye!" << endl;
            break;
        }
        
        if (PlayerChoice  < 0 || PlayerChoice > 2) {
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }
        ComputerChoice = rand() % 3;
        
        cout << "You Chose: " << choices[PlayerChoice] << endl;
        cout << "Computer Chose: " << choices [ComputerChoice] << endl;
        
        if (PlayerChoice == ComputerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((PlayerChoice == 0 && ComputerChoice == 2) ||
        (PlayerChoice == 2 && ComputerChoice == 1) ||
        (PlayerChoice == 1 && ComputerChoice == 0)) {
            cout << "You win!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }
    }
    return 0;
}