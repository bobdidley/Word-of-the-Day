/**
 * @file WordLookUp.h
 * @author James Austin Jr.
 * @brief 
 * @version 0.1
 * @date 
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#ifndef WORD_LOOK_UP_H
#define WORD_LOOK_UP_H

#include <iostream>
#include <string>
#include <fstream>
#include <curl/curl.h>


class WordLookUp {
    protected:
        std::string word;
        std::string definition;
        std::string tag;

    private:
        void setWord(std::string);
        void setDefinition(std::string);
        void setTag(std::string);

    public:
        /**
         * @brief Construct a new Word Look Up object
         *        Begins to search for a new word and it's details
         * 
         */
        WordLookUp();
        /**
         * @brief Destroy the Word Look Up object
         * 
         */
        ~WordLookUp();

        /**
         * @brief Checks if the parameter is in the word history, true if it isn't, false if it is
         *        Will determine if the word passed through is a new word
         * 
         * @return true : default value, true if the word passed in is not in the word history
         * @return false : if the word passed in is in the word history
         */
        bool isNewWord(std::string);
        void searchDetails(std::string);

        std::string getWord() const;
        std::string getDefintion() const;
        std::string getTag() const;
};

#endif