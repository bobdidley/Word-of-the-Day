/**
 * @file main.cpp
 * @author James Austin Jr.
 * @brief 
 * @version 0.1
 * @date 
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include <iostream>
#include <fstream>
#include <string>
#include <curl/curl.h>

int main() {
    srand(time(0));
    std::ifstream wordList("/usr/share/dict/words");
    if(wordList.is_open())
        std::cout << "Open File" << std::endl;
        char choice = 'y';
        std::string word;
        while(choice == 'y') {
            for(int i = 0; i < unsigned(rand()); ++i) {
                // extracts then discards
                wordList.ignore();

                // gives char value of first word
                // std::cout << wordList.peek() << std::endl;
            }
            wordList >> word;
            std::cout << word << std::endl;

            // opens website using word extracted from file
            system(("open https://www.merriam-webster.com/dictionary/" + word).c_str());

            std::cout << "Another word? (y/n) ";
            std::cin >> choice;
            std::cout << "\n";
        }
        wordList.close();

    return 0;
}