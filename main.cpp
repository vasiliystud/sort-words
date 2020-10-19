#include "functions.h"

int main()
{
    string filename = "text.txt";
    vector<string> words = wordsFromFile(filename);
    
    words = sort(words);
    
    for (size_t i = 0; i < words.size(); i++) {
        cout << words[i] << " ";
    }
    return 0;
}

