#include <iostream>
#include <string>
#include <math.h>
#include "shapes.h"

std::string box(int width, int height) {
    //Function returns a solid rectangular box of the input size using asterisks.
    std::string shape = "";
    if ((width <= 0) || (height <= 0)) {
        return shape;
    }
    for (int i = 0; i < height; i++) {
        shape = shape + std::string(width, '*') + "\n";
    }
    return shape;
}

std::string checkerboard(int width, int height) {
    /*
    Function returns a rectangular checkerboard of the requested size 
    using asterisks and spaces (alternating). 
    */
    std::string shape = "";
    if ((width <= 0) || (height <= 0)) {
        return shape;
    }
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if ((i % 2) == 0) { //odd rows
                shape.append("* ");
            } else { //even rows
                if (j != (width - 1)) {
                    shape.append(" *");
                }
            }
        }
        shape.append("\n");
    }
    return shape;
}

std::string cross(int size) {
    // Function prints a diagonal cross of the input dimension.
    std::string shape = "";
    if (size <= 0) {
        return shape;
    }
    int half = ceil(float(size)/2) - 1; //(1, 2) = 1; (3, 4) = 2; (5, 6) = 3; etc
    int btwn_spaces = (size - 2);
    int max_btwn_spaces = btwn_spaces;

    // top half
    for (int i = 0; i < half; i++) {
        //spaces before asterisks
        shape = shape + std::string(i, ' ');
        //first asterisk
        shape.append("*");
        //spaces between asterisks
        shape = shape + std::string(btwn_spaces, ' ');
        btwn_spaces -= 2;
        //second asterisk
        shape.append("*\n");
    }

    // middle
    if ((size % 2) == 0) {  //even number crosses
        for (int i = 0; i < 2; i++) {
            shape = shape + std::string(half, ' ');
            shape.append("**\n"); //two rows double asterisks
        } 
    } else { //odd number crosses
        shape = shape + std::string(half, ' ');
        shape.append("*"); //one row single asterisk
        shape.append("\n");
    }

    // bottom half
    btwn_spaces += 2;
    for (int i = (half - 1); i >= 0; i--) {
        //spaces before asterisks
        shape = shape + std::string(i, ' ');
        //first asterisk
        shape.append("*");
        //spaces between asterisks
        shape = shape + std::string(btwn_spaces, ' ');
        if (btwn_spaces < max_btwn_spaces){
            btwn_spaces += 2;
        }
        //second asterisk
        shape.append("*\n");
    }
    
    return shape;
}

std::string lower_triangle(int length) {
    // Function prints the bottom-left half of a square, given the side length.
    std::string shape = "";
    for (int i = 1; i <= length; i++) {
        shape = shape + std::string(i, '*');
        shape.append("\n");
    }
    return shape;
}

std::string upper_triangle(int length) {
    // Function prints the top-right half of a square, given the side length.
    std::string shape = "";
    for (int i = length; i > 0; i--) {
        shape = shape + std::string(i, '*');
        shape.append("\n");
    }
    return shape;
}

std::string trapezoid(int width, int height) {
    /*
    Function prints an upside-down trapezoid of given width and height.
    If the input height is impossibly large for the given width, 
    then the program returns, "Impossible shape!"
    */
    std::string shape = "";
    for (int i = 0; i < height; i++) {
        if (width < 1) {
            return "Impossible shape!\n";
        }
        shape = shape + std::string(i, ' ') +std::string(width, '*') + "\n";
        width -= 2;
    }
    return shape;
}

std::string checkerboard3x3(int width, int height) {
    // Function prints a checkerboard of 3-by-3 squares.
    std::string shape = "";
    if ((width <= 0) || (height <= 0)) {
        return shape;
    }

    int block_width = (width / 3);
    int extra_width = (width % 3);
    bool empty_width = true;
    bool empty_height = true;
    char ch;

    for (int i = 0; i < height; i++) {
        empty_width = empty_height;
        if ((i % 3) == 0) {
            empty_width = !empty_width;
            empty_height = !empty_height;
        }
        for (int j = 0; j < block_width; j++) {
            if (empty_width) {
                ch = ' ';
            } else {
                ch = '*';
            }
            shape = shape + std::string(3, ch);
            empty_width = !empty_width;
        }
        for (int j = 0; j < extra_width; j++) {
            if (empty_width) {
                ch = ' ';
            } else {
                ch = '*';
            }
            shape = shape + ch;
        }
        shape.append("\n");
    }
    return shape;
}