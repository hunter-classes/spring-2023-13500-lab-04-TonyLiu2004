#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
#include "checkerboard3x3.h"

int main(){
    std::cout << box(5,5);
    std::cout << checkerboard(5,5);
    std::cout << cross(5);
    std::cout << lower(5);
    std::cout << upper(5);
    std::cout << trapezoid(10,5);
    std::cout << checkerboard3x3(15,15);
    return 0;
}