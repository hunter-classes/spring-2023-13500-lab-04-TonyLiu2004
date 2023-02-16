//Author: Tony Liu
//Course: CSCI-135
//Instructor: Genady Maryash
//Assignment: Lab4 A

//Enter width and height, returns a box with the requested size
#include <iostream>
#include "box.h"

std::string box(int width, int height){
    std::string ret = "";
    for(int i=0;i<height;i++){
        for(int i =0;i<width;i++){
            ret += "*";  
        }
        ret += "\n";
    }
    return ret;
}