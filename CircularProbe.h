#ifndef CIRCULARPROBE_H
#define CIRCULARPROBE_H

#include "Probe.h"

class CircularProbe: public Probe{
public:
    CircularProbe();
    virtual void scan();
};


#endif // CIRCULARPROBE_H
