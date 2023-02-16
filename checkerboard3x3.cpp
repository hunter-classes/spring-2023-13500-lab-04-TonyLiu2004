//Author: Tony Liu
//Course: CSCI-135
//Instructor: Genady Maryash
//Assignment: Lab4 G

//Enter width and height, returns a 3x3 checkerboard with the requested size
#include <iostream>
#include "checkerboard3x3.h"
std::string checkerboard3x3(int width, int height){
    std::string ret = "";
    bool alt = false;
    for(int i=1;i<height+1;i++){
        if(alt){ //for alternate rows
            ret+= "   ";
        }
        //prints the squares
        bool pSpace = false;
        for(int j =0;j<width;j++){
            if(j%6==0){
                pSpace = false;
            }else if(j%3==0){
                pSpace = true;
            }
            if(pSpace){
                ret+= " ";
            }else{
                ret+= "*";  
            }
        }

        //checkerboard mechanics
        if(i%6==0){
            alt = false;
            width +=3;
        }else if(i%3==0){
            alt = true;
            width -=3;
        }
        ret+= "\n";
    }
    return ret;
}