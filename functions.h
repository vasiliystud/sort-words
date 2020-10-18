
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

vector<string> wordsFromFile(string filename);
vector<string> sort(vector<string> words);
string strtolower(string str);
        
#endif /* FUNCTIONS_H */

