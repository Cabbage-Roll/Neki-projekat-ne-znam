#ifndef AVATAR_HPP_INCLUDED
#define AVATAR_HPP_INCLUDED

#include <stdlib.h>
#include <iostream>
#include "dinstring.hpp"

using namespace std;

enum AvatarMode{COINS,MAMMOTH,RANKED};

enum YesNo{NO,YES};

class Avatar{
private:
    AvatarMode currency;
    DinString name;
    int price;
    int special;

public:
    Avatar(){
        currency=COINS;
        name="Blank Avatar";
        price=1000;
        special=1;
    }

    Avatar(AvatarMode a, DinString b, int c, YesNo d){
        currency=a;
        name=b;
        if(c>=0){
            price=c;
        }else{
            price=0;
        }
        if(currency==COINS){
            special=5*d;
        }else
        if(currency==MAMMOTH){
            special=d;
        }else{
            special=-1;
        }
        price+=c*d;
    }

    Avatar(const Avatar &p){
        currency=p.currency;
        name=p.name;
        price=p.price;
        special=p.special;
    }

    int getCurrency()const{
        if(currency==COINS){
            return 0;
        }else
        if(currency==MAMMOTH){
            return 1;
        }else{
            return 2;
        }
    }

    void setCurrency(AvatarMode a){
        currency=a;
    }

    DinString getName()const{
        return name;
    }

    void setName(DinString a){
        name=a;
    }

    int getPrice()const{
        return price;
    }

    void setPrice(int a){
        if(a>=0 && currency!=RANKED){
            price=a;
        }
    }

    int getSpecial()const{
        return special;
    }

    void setSpecial(int a){
        if(currency!=RANKED){
            price=price/(special+1);
            special=a;
            price+=price*special;
        }
    }
};


#endif
