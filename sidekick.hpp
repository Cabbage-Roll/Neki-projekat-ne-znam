#ifndef SIDEKICK_HPP_INCLUDED
#define SIDEKICK_HPP_INCLUDED

#include <stdlib.h>
#include <iostream>
#include "dinstring.hpp"

class Sidekick{
private:
    DinString name;
    int damage;
    int speed;

public:
    Sidekick(){
        name="Unnamed sidekick";
        damage=10;
        speed=20;
    }

    Sidekick(DinString c, int a, int b){
        if(a>0 && a<50){
            damage=a;
        }else{
            damage=10;
        }
        if(b>0 && b<100){
            speed=b;
        }else{
            speed=20;
        }
        name=c;
    }

    Sidekick(const Sidekick &p){
        name=p.name;
        damage=p.damage;
        speed=p.speed;
    }

    getName(){
    }

    setName(){
    }

    getDamage(){
    }

    setDamage(){
    }

    getSpeed(){
    }

    setSpeed(){
    }


};

#endif
