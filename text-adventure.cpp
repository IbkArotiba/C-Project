#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
// game is password - Players give one-word 
//clues to their partners to guess a secret word.
int main() {
    srand(time(0));
    std::vector<std::string> passwords;
    passwords.push_back("apple");
    passwords.push_back("banana");
    passwords.push_back("cherry");
    passwords.push_back("dragon");
    passwords.push_back("ocean");
    passwords.push_back("mountain");
    passwords.push_back("rocket");
    passwords.push_back("tiger");
    passwords.push_back("piano");
    passwords.push_back("eclipse");

    // Randomly select a password
    std::string password = passwords[std::rand() % passwords.size()];
    std::cout << password;
    int tries = 0;
    std::string clue;
    std::string guess;
    std::cout << "Rules:\n";
    std::cout << "1. Player 1 gives one-word clues.\n";
    std::cout << "2. Player 2 guesses the password.\n";
    std::cout << "Player 2 has 2 tries \n";
    

    while (tries < 2) {
        std::cout << "Player 1 enter one-word clues. \n";
        std::cin >> clue;
        std::cout << "Player 2 enter your guess \n";
        std::cin >> guess;
        if (guess == password){
            std::cout << "CONGRATS!! YOU GOT CRACKED THE PASSCODE \n";
        }
        else {
            tries ++;
            std::cout << "You have " << 2 -tries << "left \n";
        }
    }   


}