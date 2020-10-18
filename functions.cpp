#include "functions.h"

vector<string> wordsFromFile(string filename)
{
    
    ifstream input(filename);
    
    if(!(input.is_open())) {
        std::cout << "File was not open!" << std::endl;
    }
    
    vector<string> words;
    string word;
    
    while (input >> word) {
        word.erase(remove_if(word.begin(), word.end(), [](char c) {
            return !isalpha(c);
        } ), word.end());
        
        if (word != "") {
            words.push_back(word);
        }
    }
    
    return words;
}

