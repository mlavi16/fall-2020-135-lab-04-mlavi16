#include <iostream>
#include <string>
#include <math.h>
#include "shapes.h"

std::string box(int width, int height) {
    //Returns a solid rectangular box of the input size using asterisks.
    std::string shape = "";
    if ((width < 0) || (height < 0)) {
        return shape;
    }
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            shape.append("*");
        }
        shape.append("\n");
    }
    return shape;
}

std::string checkerboard(int width, int height) {
    /*
    Returns a rectangular checkerboard of the requested size 
    using asterisks and spaces (alternating). 
    */
    std::string shape = "";
    if ((width < 0) || (height < 0)) {
        return shape;
    }
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if ((i % 2) == 0) { //odd rows
                shape.append("* ");
            } else { //even rows
                if (j != (width - 1))
                shape.append(" *");
            }
        }
        shape.append("\n");
    }
    return shape;
}

std::string cross(int size) {
    //Function prints a diagonal cross of the input dimension.
    std::string shape = "";
    if (size <= 0) {
        return shape;
    }
    int half = ceil(float(size)/2) - 1; //(1,2)=1; (3,4)=2;  (5,6)=3; (7,8)=4; (9,10)=5; etc
    int btwn_spaces = (size - 2);
    int max_btwn_spaces = btwn_spaces;

    //top half
    for (int i = 0; i < half; i++) {
        //spaces before asterisks
        shape = shape + std::string(i, ' ');
        shape.append("*"); //first asterisk
        //spaces between asterisks
        for (int j = btwn_spaces; j > 0; j--) {
            shape.append(" ");
        }
        btwn_spaces -= 2;
        shape.append("*\n"); //second asterisk
    }

    //middle
    if ((size % 2) == 0) {  //even number crosses
        for (int i = 0; i < 2; i++) {
            for (int i = 0; i < half; i++) {
                shape.append(" ");
            }
            shape.append("**"); //two double asterisks in middle rows
            shape.append("\n");
        } 
    } else { //odd number crosses
        for (int i = 0; i < half; i++) {
            shape.append(" ");
        }
        shape.append("*"); //one single asterisk in middle row
        shape.append("\n");
    }

    // bottom
    btwn_spaces += 2;
    for (int i = (half - 1); i >= 0; i--) {
        //spaces before asterisks
        for (int j = i; j > 0; j--) {
            shape.append(" ");
        }
        shape.append("*"); //first asterisk
        //spaces between asterisks
        for (int j = 0; j < btwn_spaces; j ++){
            shape.append(" ");
        }
        if (btwn_spaces < max_btwn_spaces){
            btwn_spaces += 2;
        }
        shape.append("*\n"); //second asterisk
    }

    return shape;
}

std::string lower_triangle(int length) {
    return "";
}