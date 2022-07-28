// Testing.cpp
// Used to test the Nash project

// Imports nash
#include "../src/Nash.h"
// Allows printing
#include <iostream>

// Using "using namespace Nash" is reccommended, for ease of use
using namespace Nash;

// Create a logger object
Logger::Logger logger;

int main()
{
    std::cout << "TESTING" << std::endl;
    int three_plus_two = 3 + 2;
    logger.Info("Calculated 3 + 2");
    std::cout << "Text to show that the colour becomes white after a test." << std::endl;
    logger.Warning("I want the answer to 3 + 2 to be 6");
    if (three_plus_two != 6)
    {
        logger.Error("Oh no! It wasn't 6! NOOOOOOOOO!");
        std::cout << "Text to show that the colour becomes white after a test." << std::endl;
    }
    else
    {
        logger.Error("How the hell did you end up here? I think there may be something wrong with your computer my friend!");
        std::cout << "Text to show that the colour becomes white after a test." << std::endl;
    }
}