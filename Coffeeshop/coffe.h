#pragma once
#include "idrink.h"

class Coffe : public IDrink
{
public:
    Coffe(double price = 1.3);
    virtual double price();

protected:
    virtual void recStepTwo();
    virtual void recStepFour();
};
