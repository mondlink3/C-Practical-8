#ifndef PROBE_H
#define PROBE_H

#include "MartianSurface.h"
#include <iostream>

using namespace std;
class MartianSurface;

struct nProbes
{
    double sensorWeight;
    int cost ;
    char code[16];
    coordinates** nCoordinates;
};

class Probe{
public :
   virtual void scan() = 0 ;
   virtual void clone() = 0 ;
};



#endif // PROBE_H
