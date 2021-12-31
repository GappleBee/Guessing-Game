#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));

    int guess;
    int attempts = 1;
    int money = 500;
    int randNum = rand() % 20 + 1;
    string confirmation;
    string continueGame;
    string continueGame2;
    bool game;

    cout << "Welcome to the Guessing Game!";
    cout << "\nDo you want to play the Guessing Game? ";
    cin >> confirmation;

    if (confirmation == "Yes")
    {
        game = true;
        while ((money >= 500) && (game))
        {
            if (attempts <= 5)
            {
                cout << "Enter a number between 1 and 20: ";
                cin >> guess;
                if (guess == randNum)
                {
                    money = money - 500;
                    attempts++;
                    cout << "Congratulations! You guessed it in " << attempts - 1 << " attempts!";
                    money = money + 1000;
                    cout << "You now have £" << money << "\n";
                    cout << "Do you want to continue playing the game? ";
                    cin >> continueGame;
                    if (continueGame == "Yes")
                    {
                        randNum = rand() % 20 + 1;
                        attempts = 1;
                    }
                    else
                    {
                        cout << "See you later!";
                        game = false;
                    }
                }
                else if (guess > randNum)
                {
                    attempts++;
                    cout << "Your guess was bigger than the number!\n";
                }
                else if (guess < randNum)
                {
                    attempts++;
                    cout << "Your guess was smaller than the number!\n";
                }
            }
            else
            {
                money = money - 500;
                cout << "Sorry you used up all your attempts, the right number was " << randNum << "\n";
                cout << "Do you want to continue playing the game? ";
                cin >> continueGame2;
                if (continueGame2 == "Yes")
                {
                    randNum = rand() % 20 + 1;
                    attempts = 1;
                }
                else
                {
                    cout << "See you later!";
                    game = false;
                }
            }
        }
    }
}
