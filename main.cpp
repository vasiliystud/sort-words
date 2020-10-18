#include "functions.h"

int main()
{
    string filename = "text.txt";
    vector<string> words = wordsFromFile(filename);
    
    //for(string i : words) {
        //cout << i << " ";
    //}
    
    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << " ";
    }
    return 0;
}

