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
    result = box(5, 6);
    std::cout << "box(5, 6):\n";
    std::cout << result;
    std::cout << "------------------\n"; // separator
    result = box(0, 2); //testing heigth when width = 0
    std::cout << "box(0, 2):\n";
    std::cout << result;
    std::cout << "------------------\n";  
    result = box(0, 0); //testing 0,0
    std::cout << "box(0, 0):\n";
    std::cout << result;
    std::cout << "------------------\n";  
    result = box(-5, 5); //testing negative input
    std::cout << "box(-5, 5):\n";
    std::cout << result;
    std::cout << "------------------\n\n";  

    // checkerboard() tests
    result = checkerboard(11, 6);
    std::cout << "checkerboard(11, 6):\n";
    std::cout << result;
    std::cout << "------------------\n";  
    result = checkerboard(0, 0); //testing 0,0
    std::cout << "checkerboard(0, 0):\n";
    std::cout << result;
    std::cout << "------------------\n";  
    result = checkerboard(0, 2); //testing height when width = 0
    std::cout << "checkerboard(0, 2):\n";
    std::cout << result;
    std::cout << "------------------\n";  
    result = checkerboard(1, 5); //testing width = 1
    std::cout << "checkerboard(1, 5):\n";
    std::cout << result;
    std::cout << "------------------\n";  
    result = checkerboard(5, -5); //testing negative input
    std::cout << "checkerboard(5, -5):\n";
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

    // upper_triangle() tests
    result = upper_triangle(7);
    std::cout << "upper_triangle(7):\n";
    std::cout << result;
    std::cout << "------------------\n";
    result = upper_triangle(0); //testing 0
    std::cout << "upper_triangle(0):\n";
    std::cout << result;
    std::cout << "------------------\n";
    result = upper_triangle(-3); //testing negative number
    std::cout << "upper_triangle(-3):\n";
    std::cout << result;
    std::cout << "------------------\n";  

    // trapezoid() tests
    result = trapezoid(12, 5);
    std::cout << "trapezoid(12, 5):\n";
    std::cout << result;
    std::cout << "------------------\n";
    result = trapezoid(5, 3); //testing full length trapezoid
    std::cout << "trapezoid(5, 3):\n";
    std::cout << result;
    std::cout << "------------------\n";
    result = trapezoid(12, 7); //testing impossible shape 
    std::cout << "trapezoid(12, 7):\n";
    std::cout << result;
    std::cout << "------------------\n";
    result = trapezoid(0, 0); //testing 0
    std::cout << "trapezoid(0, 0):\n";
    std::cout << result;
    std::cout << "------------------\n";
    result = trapezoid(-3, 0); //testing negative numbers
    std::cout << "trapezoid(-3, 0):\n";
    std::cout << result;
    std::cout << "------------------\n";

    // checkerboard3x3() tests
    result = checkerboard3x3(16, 11); //testing when block of 3 is cut off in the middle
    std::cout << "trapezoid(16, 11):\n";
    std::cout << result;
    std::cout << "------------------\n";
    result = checkerboard3x3(27, 27); //testing when block of 3 is not cut off
    std::cout << "trapezoid(27, 27):\n";
    std::cout << result;
    std::cout << "------------------\n";
    result = checkerboard3x3(0, 0); //testing 0
    std::cout << "trapezoid(0, 0):\n";
    std::cout << result;
    std::cout << "------------------\n";
    result = checkerboard3x3(-2, -3); //testing negative numbers
    std::cout << "trapezoid(-2, -3):\n";
    std::cout << result;
    std::cout << "------------------\n";
}