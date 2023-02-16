#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"

int main(){
    std::cout <<  box(5,5);
    std::cout << checkerboard(5,5);
    std::cout << cross(5);
    std::cout << lower(5);
    std::cout << upper(5);
    return 0;
}