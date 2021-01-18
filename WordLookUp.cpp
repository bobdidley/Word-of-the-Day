/**
 * @file WordLookUp.cpp
 * @author James Austin Jr.
 * @brief 
 * @version 0.1
 * @date 
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "WordLookUp.h"

WordLookUp :: WordLookUp() {
    std::cout << "LOOKING UP WORD" << std::endl;

    while(!(isNewWord(word = getWord())));

    searchDetails(word);
}

WordLookUp :: ~WordLookUp() {
    std::cout << "Destroying WordLookUp..." << std::endl;
}

bool WordLookUp :: isNewWord(std::string newWord) {

}

void WordLookUp :: searchDetails(std::string w) {

}

std::string WordLookUp :: getWord() const {

}

std::string WordLookUp :: getDefintion() const {
    
}

std::string WordLookUp :: getTag() const {
    
}

void WordLookUp :: setWord(std::string) {

}

void WordLookUp :: setDefinition(std::string) {
    
}

void WordLookUp :: setTag(std::string) {
    
}