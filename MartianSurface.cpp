#include "MartianSurface.h"
#include <iostream>
MartianSurface::MartianSurface():MartianSurface(0){}
MartianSurface::MartianSurface(int noFeild)
{
    allocateMemory(noFeild);
}
MartianSurface::MartianSurface(const MartianSurface& objOriginal)
{
    *this = objOriginal;
}
MartianSurface::~MartianSurface()
{
    delete [] Feild;
}
int MartianSurface::getNoFeilds() const
{
  return noFeild ;
}
SurfaceCell* MartianSurface::getFeilds() const
{
// return Feild ;
}
void MartianSurface::scan()
{

}
void MartianSurface::allocateMemory(int noFeild)
{
    this-> noFeild = noFeild;
    Feild  = new SurfaceCell*[noFeild];
    for(int f = 0 ; f <noFeild ; f++)
    {
        //Feild = new SurfaceCell[noFeild][noProbes];
    }

}
