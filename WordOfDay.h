/**
 * @file WordOfDay.h
 * @author James Austin Jr.
 * @brief 
 * @version 0.1
 * @date 
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#ifndef WORD_OF_DAY_H
#define WORD_OF_DAY_H

#include <iostream>
#include <string>
#include <map>
#include "WordLookUp.h"

class WordOfDay {
    private:
        WordLookUp wordDetails;
        std::string date;
        std::string time;
        std::map<WordLookUp, std::string> wordHistory;

    public:
        WordOfDay();
        ~WordOfDay();

        std::string toString() const;
        void printDetails() const;

        void storeWord();
        // bool isNewWord(std::string);

        std::string getDate() const;
        std::string getTime() const;
};

#endif