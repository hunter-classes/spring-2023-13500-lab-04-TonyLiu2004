//Author: Tony Liu
//Course: CSCI-135
//Instructor: Genady Maryash
//Assignment: Lab4 F

//Enter width and height, returns an upsidedown trapezoid with the requested 
//width and length
#include <iostream>
#include "trapezoid.h"

std::string trapezoid(int width, int height){
    std::string ret;
    if(((height-1)*2) > (width-1)){
        return "Impossible shape!\n";
    }

    int front = 0;
    for(int i=0;i<height;i++){
        for(int l = 0;l<front;l++){
            ret+= " ";
        }
        for(int j =0;j<width;j++){
            ret+= "*";  
        }
        ret+="\n";
        front +=1;
        width -=2;
    }
    return ret;
}