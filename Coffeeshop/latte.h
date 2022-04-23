#pragma once
#include "idrink.h"

class Latte : public IDrink
{
public:
    Latte(double price = 1.8);
    virtual double price();

protected:
    virtual void recStepTwo();
    virtual void recStepFour();
};

