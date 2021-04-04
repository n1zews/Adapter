#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include <iostream>
#include "duck.h"

using namespace std;

class MallardDuck : public Duck {
public:
    MallardDuck();
    virtual void quack();
    virtual void fly();
};

#endif // MALLARDDUCK_H
