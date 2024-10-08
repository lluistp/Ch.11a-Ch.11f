/**
 * @file Plugboard.cpp
 * @author Lluis Torres (https://github.com/lluistp)
 * @brief Contains implementation of the class Plugboard. It's documentation in the file Plugboard.h .
 * @version 0.1
 * @date 2024-09-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "../header/Plugboard.h"

//CONSTRUCTOR
Plugboard::Plugboard(){
    letterPair = vector<int>(ALPHABET_LENGTH,0);  
}

//SETTER
/**
 * @details While setting the vector, it checks if any of the letters had a previous settings, and if so, it overrites it with the new one, setting the old one to 0.
 * 
 */
void Plugboard::setPlugboard(const int letter1, const int letter2){
    if (letterPair[letter1 - 1] != 0 || letterPair[letter2 - 1] != 0){
        int actLetter = letterPair[letter1 - 1];
        letterPair[actLetter - 1] = 0;
        actLetter = letterPair[letter2 - 1];
        letterPair[actLetter - 1] = 0;
    }
    else;
    letterPair[letter1 - 1] = letter2;
    letterPair[letter2 - 1] = letter1;
}

//GETTERS
const int Plugboard::swapLetter(int letter){
    if (letterPair[letter - 1] != 0) letter = letterPair[letter - 1];
    else;
    return letter;
}

const vector<int>& Plugboard::getConfig(){
        return letterPair;
}