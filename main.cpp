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
    // box() tests
    std::string result;
    result = box(3,5);
    std::cout << "box(3,5):\n";
    std::cout << result;
    std::cout << "------------------\n"; // separator
    result = box(0,2); //testing heigth when width = 0
    std::cout << "box(0,2):\n";
    std::cout << result;
    std::cout << "------------------\n";  
    result = box(0,0); //testing 0,0
    std::cout << "box(0,0):\n";
    std::cout << result;
    std::cout << "------------------\n";  
    result = box(-5,5); //testing negative input
    std::cout << "box(-5,5):\n";
    std::cout << result;
    std::cout << "------------------\n\n";  

    // checkerboard() tests
    result = checkerboard(11,6);
    std::cout << "checkerboard(11,6):\n";
    std::cout << result;
    std::cout << "------------------\n";  
    result = checkerboard(0,0); //testing 0,0
    std::cout << "checkerboard(0,0):\n";
    std::cout << result;
    std::cout << "------------------\n";  
    result = checkerboard(0,2); //testing height when width = 0
    std::cout << "checkerboard(0,2):\n";
    std::cout << result;
    std::cout << "------------------\n";  
    result = checkerboard(1,5); //testing width = 1
    std::cout << "checkerboard(1,5):\n";
    std::cout << result;
    std::cout << "------------------\n";  
    result = checkerboard(5,-5); //testing negative input
    std::cout << "checkerboard(5,-5):\n";
    std::cout << result;
    std::cout << "------------------\n\n";  

    // cross() tests
    result = cross(10); //testing an even number
    std::cout << "cross(10):\n";
    std::cout << result;
    std::cout << "------------------\n";  
    result = cross(5); //testing an odd number
    std::cout << "cross(5):\n";
    std::cout << result;
    std::cout << "------------------\n";  
    result = cross(0); //testing 0
    std::cout << "cross(0):\n";
    std::cout << result;
    std::cout << "------------------\n";  
    result = cross(1); //testing 1
    std::cout << "cross(1):\n";
    std::cout << result;
    std::cout << "------------------\n";  
    result = cross(2); //testing 2
    std::cout << "cross(2):\n";
    std::cout << result;
    std::cout << "------------------\n";  
    result = cross(-10); //testing negative number
    std::cout << "cross(-10):\n";
    std::cout << result;
    std::cout << "------------------\n\n";  

    // lower_triangle() tests
    result = lower_triangle(6);
    std::cout << "lower_triangle(6):\n";
    std::cout << result;
    std::cout << "------------------\n";
    result = lower_triangle(0); //testing 0
    std::cout << "lower_triangle(0):\n";
    std::cout << result;
    std::cout << "------------------\n";
    result = lower_triangle(-7); //testing negative number
    std::cout << "lower_triangle(-7):\n";
    std::cout << result;
    std::cout << "------------------\n";  

}