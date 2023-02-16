//Author: Tony Liu
//Course: CSCI-135
//Instructor: Genady Maryash
//Assignment: Lab4 B

//Enter width and height, returns a checkerboard with the requested size
#include <iostream>
#include "checkerboard.h" 

std::string checkerboard(int width, int height){
    std::string ret = "";
    for(int i=0;i<height;i++){
        for(int j =0;j<width;j++){
            if(i%2==1){
                if(j%2==0){
                    ret+= " ";
                }else{
                    ret+= "*";
                }
            }else{
                if(j%2==0){
                    ret+= "*";  
                }else{
                    ret+= " ";
                }
            }
        }
        ret+= "\n";
    }
    return ret;
}