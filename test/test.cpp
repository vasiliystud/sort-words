#include "../functions.h"
#define CATCH_CONFIG_MAIN
#include "../lib/catch.hpp"

TEST_CASE ("Text has special characters or numbers between whitespaces")
{
    string expected = "HelloWorld";
    string result;
    vector<string> words = wordsFromFile("test/1.txt");
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
    }
    REQUIRE(expected == result);
}

TEST_CASE ("Text has special characters or numbers between lettets")
{
    string expected = "HelloWorld";
    string result;
    vector<string> words = wordsFromFile("test/2.txt");
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
    }
    REQUIRE(expected == result);
}