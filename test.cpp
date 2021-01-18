/**
 * @file test.cpp
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

int main() {
    // TEST
    /* File test:
     * Reads from file
     */
    std::ifstream wordList("/usr/share/dict/words");
    if(wordList.is_open())
        std::cout << "Open file" << std::endl;
    std::string word;
    for(int i = 0; i < 560; ++i) {
        // extracts then discards
        wordList.ignore();

        // gives char value of first word
        // std::cout << wordList.peek() << std::endl;
    }
    wordList >> word;
    std::cout << word;

    // opens website using word extracted from file
    system(("open https://www.merriam-webster.com/dictionary/" + word).c_str());

    return 0;
}