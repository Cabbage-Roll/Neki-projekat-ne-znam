#ifndef SPIKE_HPP_INCLUDED
#define SPIKE_HPP_INCLUDED

#include <stdlib.h>
#include <iostream>
#include "bacenestvari.hpp"

using namespace std;

class Spike: public BaceneStvari{
private:
    private:
    int speed;
    int bounciness;
    int weight;
    int force;
public:
    Spike(){
        speed=1;
        force=100;
        bounciness=0.1;
        weight=100;
    }

    Spike(int a, int b, int c, int d){
        if(a>0){
            speed=a;
        }else{
            speed=1;
        }
        if(b>0){
            force=a;
        }else{
            force=100;
        }
        speed*=force;
        bounciness=c;
        if(d>0){
            weight=d;
        }else{
            weight=100;
        }
    }

    Spike(const Spike &p){
        speed=p.speed;
        bounciness=p.bounciness;
        weight=p.weight;
        force=p.force;
    }

    int getSpeed(){
        return speed;
    }

    int getBounciness(){
        return bounciness;
    }

    int getWeight(){
        return weight;
    }

    int getForce(){
        return force;
    }

    bool setSpeed(int a){
        if(a>0){
            speed=a;
            return true;
        }
        return false;
    }

    int setBounciness(int a){
        return bounciness;
    }

    bool setWeight(int a){
        if(a>0){
            weight=a;
            return true;
        }
        return false;
    }

    bool setForce(int a){
        if(a>0){
            force=a;
            return true;
        }
        return false;
    }

    int damage(){
        return speed*force*weight*bounciness/100;
    }
};

#endif
