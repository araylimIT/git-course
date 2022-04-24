#pragma once
#include "idrink.h"

class Latte : public IDrink
{
protected:
    virtual void recStepTwo();
    virtual void recStepFour();
public:
    Latte(double price = 1.8);
    virtual double price();
};

