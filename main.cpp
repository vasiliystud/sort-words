#include "functions.h"

int main()
{
    string filename = "text.txt";
    vector<string> words = wordsFromFile(filename);
    
    for(string i : words) {
        cout << i << " ";
    }
    return 0;
}

