//Author: Tony Liu
//Course: CSCI-135
//Instructor: Genady Maryash
//Assignment: Lab4 C

//Enter size, returns a cross with the requested size
#include <iostream>
#include <string>
using namespace std;
std::string cross(int size){
    std::string ret = "";
    if(size == 1){
        ret += "*";
        return 0;
    }
    for(int x = 0;x < size;x++){
        for(int y = 0;y<size;y++){
            if(x==y || y ==(size-1-x)){
                ret += "*";
            }else{
                ret += " ";
            }
        }
        ret += "\n";
    }
    return ret;
}