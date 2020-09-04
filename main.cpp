#include <iostream>

using namespace std;

int main()
{
    string color, food, celebrity, yesno;

    cout << "Welcome!" <<endl;
    cout << "Let's play a game!" <<endl;

    cout << "Give me a color: " << endl;
    cin >> color;

    cout << "What's the last food you ate: " << endl;
    cin >> food;

    cout << "What's your first name: " << endl;
    cin >> celebrity;

    cout << "Processing..." << endl;
    cout << "..." << endl;
    cout << "..." << endl;
    cout << "..." << endl;

    cout << "Roses are " << color << "," << endl;
    cout << food << " are also " << color << "," << endl;
    cout << "I love " << celebrity << "!" << endl;

    cout << "..." << endl;
    cout << "..." << endl;
    cout << "..." << endl;

    cout << "Was that fun?\n";
    cin >> yesno;

    if(yesno == "y" || yesno == "yes"){
        cout << "Awesome! Let's play another game!" <<endl;
    } else if(yesno == "n" || yesno == "no"){
        cout << "Aw hell no! Here's another game we can play." <<endl;
    } else{
        cout << "I don't understand. Let's just play again, alright?" <<endl;
    }
    cout << "..." << endl;
    cout << "..." << endl;
    cout << "..." << endl;

    cout << "Guess what number I'm thinking." <<endl;

    int secretNum = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(secretNum != guess && !outOfGuesses){
        if(guessCount < guessLimit){
        cout << "Enter guess: \n";
        cin >> guess;
        guessCount++;
        } else {
            outOfGuesses = true;
        }
    }

    if(outOfGuesses){
        cout << "You ran out of guesses." <<endl;
    } else{
        cout << "YOU GOT IT!!" << endl;
    }

    /* Medyo naguguluhan ako sa logic nitong Guessing Game.
    I have to study it more. */
    cout << "..." << endl;
    cout << "..." << endl;
    cout << "..." << endl;

    cout << "That was fun! Let's play another game." <<endl;

    cout << "..." << endl;
    cout << "..." << endl;
    cout << "..." << endl;

    cout << "I'll show you I can count." <<endl;

    cout << "Give me a number: ";

    double countNum;
    double *pCountNum = &countNum;

    cin >> countNum;

    for(double countNum = *pCountNum; countNum <= *pCountNum+10; countNum++){

         cout << countNum << endl;
    }

    cout << "Isn't that awesome?!" << endl;
    cout << "..." << endl;
    cout << "..." << endl;
    cout << "..." << endl;

    /* I like this counting part. Was able to figure out how to use pointers.
    This is a great way to use pointer. laveeet
    Aug 20, 2020
    */

    cout << "Thanks for playing! See yah!" << endl;

    return 0;
}
