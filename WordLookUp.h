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
        WordLookUp();
        ~WordLookUp();

        bool isNewWord(std::string);
        void searchDetails(std::string);

        std::string getWord() const;
        std::string getDefintion() const;
        std::string getTag() const;
};

#endif