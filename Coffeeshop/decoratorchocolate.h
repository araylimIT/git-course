#pragma once

#include "idecorator.h"

class DecoratorChocolate : public IDecorator
{
public:
    DecoratorChocolate(IProduct* product = 0, double price = 0.8);
    virtual double price();
};
