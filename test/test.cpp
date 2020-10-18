#include "../functions.h"
#define CATCH_CONFIG_MAIN
#include "../lib/catch.hpp"

TEST_CASE ("Text has special characters or numbers between whitespaces")
{
    wordsFromFile("test/1.txt");
    vector<string> expected("Hello", "World");
    REQUIRE(expected == wordsFromFile("1.txt"));
}

TEST_CASE ("Text has special characters or numbers between lettets")
{
    wordsFromFile("test/2.txt");
    vector<string> expected("Hello", "World");
    REQUIRE(expected == wordsFromFile("1.txt"));
}