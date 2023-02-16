//Author: Tony Liu
//Course: CSCI-135
//Instructor: Genady Maryash
//Assignment: Lab4 D

//Enter size length, returns a triangle with the requested side length
#include <iostream>
#include "lower.h"

std::string lower(int side){
    int num=1;
    std::string ret = "";
    for(int i=side;i>0;i--){
        for(int j=0;j<num;j++){
            ret+= "*";
        }
        num+=1;
        ret+= "\n";
    }
    return ret;
}