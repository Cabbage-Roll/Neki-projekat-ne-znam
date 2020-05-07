#ifndef WEAPONS_HPP_INCLUDED
#define WEAPONS_HPP_INCLUDED

#include <stdlib.h>
#include <iostream>

#include "axe.hpp"
#include "blasters.hpp"
#include "bow.hpp"
#include "cannon.hpp"
#include "gauntlets.hpp"
#include "hammer.hpp"
#include "katars.hpp"
#include "lance.hpp"
#include "orb.hpp"
#include "scythe.hpp"
#include "spear.hpp"
#include "sword.hpp"

using namespace std;

enum Oruzje{HAMMER,SWORD,BLASTERS,LANCE,SPEAR,KATARS,AXE,BOW,GAUNTLETS,SCYTHE,CANNON,ORB};

class Weapons{
private:
    Hammer ha;
    Sword sw;
    Blasters bl;
    Lance la;
    Spear sp;
    Katars ka;
    Axe ax;
    Bow bo;
    Gauntlets ga;
    Scythe sc;
    Cannon ca;
    Orb orb;
    int activeweapons[12];
public:
    Weapons(): ha(), sw(), bl(), la(), sp(), ka(), ax(), bo(), ga(), sc(), ca(), orb(){
    }

    bool setActiveweapons(Oruzje a, Oruzje b){
        if(a!=b){
            activeweapons[a]=1;
            activeweapons[b]=1;
            return true;
        }
        return false;
    }

    int getActiveweapons()const{
        int temp, i;
        for(i=0;i<12;i++){
            if(activeweapons[i]==1){
                temp=i*100;
            }
        }
        for(i;i<12;i++){
            if(activeweapons[i]==1){
                temp+=i;
            }
        }
        return temp;
    }

};


#endif
