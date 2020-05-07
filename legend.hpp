#ifndef LEGEND_HPP_INCLUDED
#define LEGEND_HPP_INCLUDED

#include <stdlib.h>
#include <iostream>

using namespace std;

class Legend{
private:
    DinString name;
    int level;
    Weapons w;
    Bomb b;
    Mine m;
    Spike sp;
    Sidekick si;
    Color c;
    int att;
    int def;
    int dex;
    int spe;

public:
    Legend(): w(), b(), m(), sp(), si(), c(){
        name="Blank Legend";
        level=0;
    }

    Legend(DinString a, int b, int c, int d, int e, int f, Boje g, DinString h): w(), c(){
        int total=22, temp;
        name=a;
        level=0;

        if(b>0 && b<=10 && b<=total){
            att=b;
            total-=b;
        }else{
            att=total/4;
            total-=total/4;
        }

        if(c>0 && c<=10 && c<=total){
            def=c;
            total-=c;
        }else{
            def=total/3;
            total-=total/3;
        }

        if(d>0 && d<=10 && d<=total){
            dex=d;
            total-=d;
        }else{
            dex=total/2;
            total-=total/2;
        }

        if(e>0 && e<=10 && e<=total){
            spe=e;
            total-=e;
        }else{
            att=total;
            total-=total;
        }

        if(total>0){
            temp=10-att;
            if(total>temp){
                att=10;
                total-=temp;
                def+=total;
            }else{
                att+=temp;
            }
        }

            /// c.setColorconst(h);

        switch(g){
            /*case Classic:
                break;
            case Blue:
                c.setColor1("Svetlo plava");
                c.setColor2("Tamno plava");
                break;
            case Yellow:
                c.setColor1("Bela");
                c.setColor2("Zuta");
                break;
            case Green:
                c.setColor1("Zelena");
                c.setColor2("Tirkizna");
                break;
            case Brown:
                c.setColor1("Braon");
                c.setColor2("Siva");
                break;
            case Purple:
                c.setColor1("Tamno plava");
                c.setColor2("Ljubicasta");
                break;
            case Orange:
                c.setColor1("Narandzasta");
                c.setColor2("Zelena");
                break;
            case Cyan:
                c.setColor1("Tirkizna");
                c.setColor2("Zelena");
                break;
            case Sunset:
                c.setColor1("Roze");
                c.setColor2("Bela");
                break;
            case Grey:
                c.setColor1("Siva");
                c.setColor2("Siva");
                break;
            case Pink:
                c.setColor1("Crvena");
                c.setColor2("Roze");
                break;
            case Red:
                c.setColor1("Tamno crvena");
                c.setColor2("Crna");
                break;
            case White:
                c.setColor1("Bela");
                c.setColor2("Bela");
                break;
            case Black:
                c.setColor1("Crna");
                c.setColor2("Crna");
                break;
            case Skyforged:
                c.setColor1("Svetlo plava");
                c.setColor2("Bela");
                break;
            case Goldforged:
                c.setColor1("Narandzasta");
                c.setColor2("Crna");
                break;*/
        }

    }
};

#endif
