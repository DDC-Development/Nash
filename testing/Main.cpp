// Testing.cpp
// Used to test the Nash project

// Imports nash
#include "../src/Nash.h"
// Allows printing
#include <iostream>

using namespace Nash;
using namespace Nash::Math;

int main()
{
    std::cout <<  Arithmetic::Add(1, 2)          << std::endl;
    std::cout <<  Arithmetic::Divide(5, 2)       << std::endl;
    std::cout <<  Arithmetic::Multiply(2, 10)    << std::endl;
    std::cout <<  Arithmetic::Subtract(10, 5)    << std::endl;

    std::cout <<  Trigonometry::Sine(1)          << std::endl;
    std::cout <<  Trigonometry::Cosine(1)        << std::endl;
    std::cout <<  Trigonometry::Tangent(1)       << std::endl;

    std::cout <<  BasicMath::absolute(-5)        << std::endl;
    std::cout <<  BasicMath::cube_root(27)       << std::endl; 
    std::cout <<  BasicMath::logarithm(10)       << std::endl; 
    std::cout <<  BasicMath::root(16)            << std::endl; 
    std::cout <<  BasicMath::round_num(16.54945) << std::endl; 
    std::cout <<  BasicMath::to_power_of_n(3, 4) << std::endl; 
}