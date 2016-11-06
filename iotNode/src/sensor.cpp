#include "sensor.h"

sensor::sensor()
{
    //ctor
}

sensor::~sensor()
{
    //dtor
}
int sensor::getrdg() //getrdg is a function in class sensor. It returns and int.
{    rdg = 5*3;             //I might fancy this up with srand later - there is no sensor.
    return (rdg);
}
