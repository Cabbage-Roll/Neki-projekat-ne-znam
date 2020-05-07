#ifndef CANNON_HPP_INCLUDED
#define CANNON_HPP_INCLUDED

#include <stdlib.h>
#include <iostream>

class Color{
private:
    DinString color1;
    DinString color2;
    DinString constcolor;

public:
    Color(){
        color1="Red";
        color2="Yellow";
        constcolor="Green";
    }

    Color(DinString a, DinString b, DinString c){
        color1=a;
        color2=b;
        constcolor=c;
    }

    Color(const Color &p){
        color1=p.color1;
        color2=p.color2;
        constcolor=p.constcolor;
    }

    DinString getColor1()const{
        return color1;
    }

    void setColor1(DinString a){
        color1=a;
    }

    DinString getColor2()const{
        return color2;
    }

    void setColor2(DinString a){
        color2=a;
    }

    DinString getColorconst()const{
        return constcolor;
    }

    void setColorconst(DinString a){
        constcolor=a;
    }

};

#endif
