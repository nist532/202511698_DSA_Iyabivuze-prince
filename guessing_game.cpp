#include <iostream>

using namespace std;

int main() {

    int chosenNumber = 7; 
    int userGuess = 0;   
     
    int attempts[100];   
    int attemptCount = 0; 

    while (userGuess != chosenNumber) {
        cout << "Enter a number: "; 
        cin >> userGuess;           

        if (attemptCount < 100) {
            attempts[attemptCount] = userGuess;
            attemptCount++;
        }
      
        if (userGuess > chosenNumber) {
            cout << "Too high" << endl;
        } 
        else if (userGuess < chosenNumber) {
            cout << "Too low" << endl; 
        } 
        else {
            cout << "Correct" << endl;  
        }
    }

    
    cout << "\nAll guesses recorded:" << endl;
    for (int i = 0; i < attemptCount; i++) {
        cout << "Attempt " << (i + 1) << ": " << attempts[i] << endl;
    }

    return 0;
}