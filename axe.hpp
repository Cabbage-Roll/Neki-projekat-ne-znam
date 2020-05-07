#ifndef AXE_HPP_INCLUDED
#define AXE_HPP_INCLUDED

#include <stdlib.h>
#include <iostream>

using namespace std;


class Axe{
private:
    int siz;
    int hitframes;
    int ifhits;
    int damage;
public:
    Axe(){
        siz=10;
        hitframes=7;
        ifhits=15;
        damage=50;
    }
    Axe(int a, int b, int c, int d){
        if(a>0){
            siz=a;
        }else{
            siz=10;
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
    }

    Axe(const Axe &p){
        siz=p.siz;
        hitframes=p.hitframes;
        ifhits=p.ifhits;
        damage=p.damage;
    }

    int getSiz(){
        return siz;
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

    bool setSiz(int a){
        if(a>0){
            siz=a;
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
