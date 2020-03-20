#include "SpaceObject.h"
#include <iostream>

SpaceObject::SpaceObject(double mass0 = 0, double r0 = 0) {
	mass = mass0;
	r = r0;
    g = 9.81;
    bigG = 6.67408 * (10 ^ (-11));
}

SpaceObject::SpaceObject(const SpaceObject& rf) :  mass(rf.mass), r(rf.r), g(rf.g), bigG(rf.bigG){

}

SpaceObject::~SpaceObject() {

}

const SpaceObject& SpaceObject::operator=(const SpaceObject& sp)
{
    if (this != &sp) {
        mass = sp.mass;
        r = sp.r;
    }
    return *this;
}

double SpaceObject::getPi()
{
    int max = 1000;
    double sum = 0.0;
    int sign = 1;
    for (int i = 0; i < max; ++i) {
        sum += sign / (2.0 * i + 1.0);
        sign *= -1;
    }
    return 4.0 * sum;
}

double SpaceObject::getSpace() const
{
    return (4/3*pi()*r^3);
}

double SpaceObject::getArea() const
{
    return (4*pi()*r^2);
}


