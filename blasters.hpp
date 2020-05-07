#ifndef BLASTERS_HPP_INCLUDED
#define BLASTERS_HPP_INCLUDED

#include <stdlib.h>
#include <iostream>

using namespace std;


class Blasters{
private:
    int delay;
    int airjump;
    int hitframes;
    int ifhits;
    int damage;
public:
    Blasters(){
        delay=10;
        airjump=10;
        hitframes=7;
        ifhits=15;
        damage=50;
    }
    Blasters(int a, int b, int c, int d, int e){
        if(a>0){
            delay=a;
        }else{
            delay=10;
        }
        if(b>0){
            hitframes=b;
        }else{
            hitframes=7;
        }
        if(c>0){
            ifhits=c;
        }else{
            ifhits=15;
        }
        if(d>0){
            damage=d;
        }else{
            damage=50;
        }
        if(e>0){
            airjump=d;
        }else{
            airjump=50;
        }
    }

    Blasters(const Blasters &p){
        airjump=p.airjump;
        delay=p.delay;
        hitframes=p.hitframes;
        ifhits=p.ifhits;
        damage=p.damage;
    }

    int getDelay(){
        return delay;
    }

    int getAirjump(){
        return airjump;
    }

    int getHitframes(){
        return hitframes;
    }

    int getIfhits(){
        return ifhits;
    }

    int getDamage(){
        return damage;
    }

    bool setAirjump(int a){
        if(a>0){
            airjump=a;
            return true;
        }
        return false;
    }

    bool setDelay(int a){
        if(a>0){
            delay=a;
            return true;
        }
        return false;
    }

    bool setHitframes(int a){
        if(a>0){
            hitframes=a;
            return true;
        }
        return false;
    }

    bool setIfhits(int a){
        if(a>0){
            ifhits=a;
            return true;
        }
        return false;
    }

    bool setDamage(int a){
        if(a>0){
            damage=a;
            return true;
        }
        return false;
    }
};

#endif
