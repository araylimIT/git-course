#pragma once
#include "idecorator.h"

class DecoratorMilk : public IDecorator
{
public:
    DecoratorMilk(IProduct* product = 0, double price = 0.4);
    virtual double price();
};
