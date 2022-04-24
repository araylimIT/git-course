#pragma once
#include "idrink.h"

class Espresso : public IDrink
{
protected:
    virtual void recStepTwo();
    virtual void recStepFour();
public:
    Espresso(double price = 1.5);
    virtual double price();
};
