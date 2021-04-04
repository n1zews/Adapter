#ifndef WILDTURKEY_H
#define WILDTURKEY_H

#include <iostream>
#include "turkey.h"

using namespace std;

class WildTurkey : public Turkey {
public:
    WildTurkey();
    virtual void gobble();
    virtual void fly();
};

#endif // WILDTURKEY_H
