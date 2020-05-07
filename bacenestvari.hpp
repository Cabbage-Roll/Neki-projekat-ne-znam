#ifndef BACENESTVARI_HPP_INCLUDED
#define BACENESTVARI_HPP_INCLUDED

#include <stdlib.h>
#include <iostream>

using namespace std;

class BaceneStvari{
protected:
    int speed;
    int bounciness;
    int weight;
    int force;
public:
    virtual int damage()=0;
};

#endif
