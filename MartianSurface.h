#ifndef MARTIANSURFACE_H
#define MARTIANSURFACE_H

#include <iostream>
using namespace std;
struct SurfaceCell
{
    int SoilWaterPerc;
    double MineralWealth;
    bool scanned;
};
class MartianSurface
{
public:
    MartianSurface();
    MartianSurface(int noFeild);
    MartianSurface(const MartianSurface& objOriginal);
    ~MartianSurface();

    //Accessors
    int getNoFeilds() const ;
    SurfaceCell* getFeilds() const ;
    //Delegation
    void scan();
    //Overloading

private :
    void allocateMemory(int noFeild);
    SurfaceCell** Feild ;
   //   Probes* nProbe;
    int noFeild;
    int noProbes ;

};

#endif // MARTIANSURFACE_H
