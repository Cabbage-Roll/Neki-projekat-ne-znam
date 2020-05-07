#ifndef THROWNWEAPON_HPP_INCLUDED
#define THROWNWEAPON_HPP_INCLUDED

#include <stdlib.h>
#include <iostream>
#include "bacenestvari.hpp"

using namespace std;


class ThrownWeapon: public BaceneStvari{
private:
    int speed;
    int bounciness;
    int weight;
    int force;
public:
    ThrownWeapon(){
        speed=5;
        force=1;
        bounciness=0.1;
        weight=10;
    }

    ThrownWeapon(int a, int b, int c, int d){
        if(a>0){
            speed=a;
        }else{
            speed=5;
        }
        if(b>0){
            force=a;
        }else{
            force=1;
        }
        speed*=force;
        bounciness=c;
        if(d>0){
            weight=d;
        }else{
            weight=10;
        }
    }

    ThrownWeapon(const ThrownWeapon &p){
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
