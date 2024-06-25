// NUMBER GUESSING GAME TASK 1 CodSoft
//  #CodSoft
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    cout << "\n\nWELCOME TO THE NUMBER GUESSING GAME" << endl;
    srand(time(0)); // to generate different number every time this program runs.
    cout << "\n\nrules for this game." << endl;
    cout << "1.number less than 1 is not allowed." << endl;
    cout << "2.number greater than 100 is not allowed." << endl;
    cout << "3.you have maximum 10 attempts to guess a number." << endl;
    cout << "4.on every guess you will be getting a feedback whether your guess is too high or too low." << endl
         << endl;
    int n, g, count = 10;
    n = rand() % 100;
    do
    {
        count--;
        cout << "Enter your guess: ";
        cin >> g;  // taking player guess input.
        if (g > n) // providing feedback to player according to his/her input.
            cout << "guess is too high." << endl;
        else if (g < n)
            cout << "guess is too low." << endl;
        else
        { // on correct guess coming out of loop.
            cout << "!!CONGRATULATIONS CORRECT GUESS!!";
            break;
        }
    } while (count > 0);
    if (count > 0) // displaying no. of attempts on correct guess.
        cout << "you guessed correct answer in " << (10 - count) << " attempts." << endl;
    else
    {
        cout << "you lost.\nplease try again later." << endl;
        cout << "the number was " << n << endl; // displaying no. if player was unable to guess it.
    }
    cout << "Thank you for playing this game." << endl;
    return 0;
}