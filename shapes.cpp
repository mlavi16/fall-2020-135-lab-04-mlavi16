#include <iostream>
#include <string>
#include "shapes.h"

std::string box(int width, int height) {
    //returns a solid rectangular box of the inputed size using asterisks.
    std::string shape;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            shape.append("*");
        }
        if (i != (height-1)) {
            shape.append("\n");
        }
    }
    return shape;
}

std::string checkerboard(int width, int height) {
    std::string shape;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if ((i % 2) == 0) {
                shape.append("* ");
            } else {
                if (j != (width-1))
                shape.append(" *");
            }
        }
        if (i != (height-1)) {
            shape.append("\n");
        }
    }
    return shape;
}