#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    srand(time(0));

    string choices[] = {"Rock", "Paper", "Scissors"};
    int userScore = 0, computerScore = 0;

    cout << "\n===== Rock Paper Scissors Game =====" << endl;

    while (true) {
        cout << "\nChoose one: \n1. Rock \n2. Paper \n3. Scissors \n4. Exit" << endl;
        int userChoice;
        cin >> userChoice;

        if (userChoice == 4) {
            cout << "\nFinal Score - You: " << userScore << " | Computer: " << computerScore << endl;
            if (userScore > computerScore) {
                cout << "\n🥳 Congratulations! You Won the Game!" << endl;
            } else if (userScore < computerScore) {
                cout << "\n😞 You Lost the Game!" << endl;
            } else {
                cout << "\n😐 It's a Tie!" << endl;
            }
            break;
        }

        if (userChoice < 1 || userChoice > 4) {
            cout << "Invalid Choice. Try again!" << endl;
            continue;
        }

        int computerChoice = rand() % 3; // Random number between 0 to 2

        cout << "You chose: " << choices[userChoice-1] << endl;
        cout << "Computer chose: " << choices[computerChoice] << endl;

        if (userChoice-1 == computerChoice) {
            cout << "It's a Tie!" << endl;
        } else if ((userChoice-1 == 0 && computerChoice == 2) ||
                   (userChoice-1 == 1 && computerChoice == 0) ||
                   (userChoice-1 == 2 && computerChoice == 1)) {
            cout << "You Win This Round!" << endl;
            userScore++;
        } else {
            cout << "Computer Wins This Round!" << endl;
            computerScore++;
        }

        cout << "Score: You: " << userScore << " | Computer: " << computerScore << "\n";
    }

    cout << "\nThanks for playing!" << endl;

    return 0;
}
