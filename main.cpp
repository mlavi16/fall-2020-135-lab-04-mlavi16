/*
Author: Maya Lavi
Course: CSCI-135
Instructor: Zamansky
Assignment: Lab 4
*/

#include <iostream>
#include "shapes.h"

int main()
{
    // box.cpp tests
    std::string result;
    result = box(3,5);
    std::cout << "box(3,5):\n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator 
    result = box(0,0);
    std::cout << "box(0,0):\n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator 
    result = box(5, 1);
    std::cout << "box(5,1):\n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator 
}