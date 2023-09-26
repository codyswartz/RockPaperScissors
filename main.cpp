#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int playerScore = 0;
    int aiScore = 0;
    int roundsToWin = 3;

    srand(time(0));

    while (playerScore < roundsToWin && aiScore < roundsToWin) {
        cout << "Rock, Paper, Scissors - Enter your choice (1 - Rock, 2 - Paper, 3 - Scissors): ";
        int playerChoice;
        cin >> playerChoice;

        int aiChoice = rand() % 3 + 1;

        if (aiChoice == 1) {
            cout << "Opponent chose Rock." << endl;
        } else if (aiChoice == 2) {
            cout << "Opponent chose Paper." << endl;
        } else {
            cout << "Opponent chose Scissors." << endl;
        }

        if (playerChoice == aiChoice) {
            cout << "It's a tie!" << endl;
        } else if ((playerChoice == 1 && aiChoice == 3) ||
                   (playerChoice == 2 && aiChoice == 1) ||
                   (playerChoice == 3 && aiChoice == 2)) {
            cout << "You win this round!" << endl;
            playerScore++;
        } else {
            cout << "Opponent wins this round!" << endl;
            aiScore++;
        }

        cout << "Player Score: " << playerScore << " | Opponent Score: " << aiScore << endl;
    }

    if (playerScore >= roundsToWin) {
        cout << "You win" << endl;
    } else {
        cout << "You lost." << endl;
    }

    return 0;
}