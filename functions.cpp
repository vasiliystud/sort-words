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

string strtolower(string str)
{
    
transform(str.begin(), str.end(), str.begin(), ::tolower);

return str;
}

vector<string> sort(vector<string> words)
{
    string tmp="";
    
    for (int i=0;i < words.size() ;i++) {
        for(int j = i; j < words.size(); j++) {
            if(strtolower(words[i]) > strtolower(words[j])) {
                tmp = words[i]; 
                words[i] = words[j];
                words[j] = tmp;
           }
        }
    }
    
    return words;
}

