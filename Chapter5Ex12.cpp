#include <iostream>
#include <ctime>
using namespace std;

int main()
{
     

    int computerNumber;
    int myGuess;
    double seed;
    seed = time(0);
    srand(seed);
    computerNumber = rand()%100 + 1;
   
    cout << "Please enter your guess for the computer number: ";
    while (true)
    {
        cin >> myGuess;
        if (myGuess > computerNumber)
            cout << "Your guess is too high." << endl;
        else if (myGuess < computerNumber)
            cout << "Your Guess is too low." << endl;
        else
        {
            cout << "Your guess is correct!" << endl;
            break;
        }
    }
    return 0;



}
