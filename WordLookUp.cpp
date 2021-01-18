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
    bool isNew = true;
    std::ifstream wordHistory("wordHistory.txt");

    if(!wordHistory.is_open()) { throw std::string("No file exists..."); }

    wordHistory.seekg(-1, std::ios_base::end);

    std::string latestDetails;
    int indexDateBegin = 0, indexDateEnd = 10;
    int indexWordBegin = 12;

    std::getline(wordHistory, latestDetails);
    std::string latestDate = latestDetails.substr(indexDateBegin, indexDateEnd);
    std::string latestWord = latestDetails.substr(indexWordBegin);
    std::string todayDate = "2021-01-17"; // NOTE: <ctime>? need to format date

    if(latestDate == todayDate) {
        isNew = false;
    }
    else if (latestWord == newWord) {
        isNew = false;
    }
    else {
        wordHistory.seekg(0, std::ios_base::beg); // goes to beginning of file
        std::string details;
        while(!wordHistory.eof()) {
            std::getline(wordHistory, details);
            if(details.substr(indexWordBegin) == newWord) {
                isNew = false;
                break; // exit loop if there has been a match
            }
            wordHistory.ignore(); // only necessary if getline() does not go to next line after
        }
    }

    return isNew;
}

void WordLookUp :: searchDetails(std::string searchWord) {
    std::string URL("https://www.merriam-webster.com/dictionary/" + searchWord);

    system(("open " + URL).c_str()); // access to website
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