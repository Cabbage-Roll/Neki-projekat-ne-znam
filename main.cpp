#include <windows.h>
#include <time.h>
#include "list.hpp"
#include "dinstring.hpp"

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

#include "weapons.hpp"
#include "sidekick.hpp"
#include "color.hpp"
#include "bacenestvari.hpp"

#include "spike.hpp"
#include "thrownweapon.hpp"
#include "mine.hpp"
#include "bomb.hpp"




using namespace std;

enum Boje{Classic,Blue,Yellow,Green,Brown,Purple,Orange,Cyan,Sunset,Grey,Pink,Red,White,Black,Skyforged,Goldforged};

int menu(){
    int opcija;
    cout<<"1. Ispisi sve"<<endl;
    cout<<"2. Izadji"<<endl;
    cin>>opcija;
    return opcija;
}


void nepostoji(){
    system("cls");
    cout<<"Ova opcija ne postoji!"<<endl;
    Sleep(1000);
    system("cls");
}

int main()
{
    srand(time(0));
    int proc=0, m, m2, br=0;

    while(1){
        m=menu();
        switch(m){
            case 1:
                break;
            case 2:
                return 0;
                break;
            default:
                nepostoji();
                break;
            system("cls");
        }
    }
    return 0;
}
