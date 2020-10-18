#include "../functions.h"
#define CATCH_CONFIG_MAIN
#include "../lib/catch.hpp"

TEST_CASE ("Text has special characters or numbers between whitespaces")
{
    string expected = "HelloWorld";
    string result;
    for(string s : wordsFromFile("test/1.txt")) {
        result+= s;
    }
    REQUIRE(expected == result);
}

TEST_CASE ("Text has special characters or numbers between lettets")
{
    string expected = "HelloWorld";
    string result;
    for(string s : wordsFromFile("test/2.txt")) {
        result+= s;
    }
    REQUIRE(expected == result);
}