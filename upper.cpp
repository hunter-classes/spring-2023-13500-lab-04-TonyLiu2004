//Author: Tony Liu
//Course: CSCI-135
//Instructor: Genady Maryash
//Assignment: Lab4 E

//Enter side length, returns top-right of a square of the requested length
#include <iostream>
#include "upper.h"

std::string upper(int side){
    std::string ret = "";
    int front = 0;
    for(int i=side;i>0;i--){
        for(int x=0;x<front;x++){
                ret+= " ";
        }
        for(int j=0;j<i;j++){
            ret+= "*";
        }
        front+=1;
        ret+= "\n";
    }
    return ret;
}