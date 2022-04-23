#pragma once
#include "iproduct.h"

class IDrink : public IProduct
{
protected:
    virtual void recStepTwo() = 0;
    virtual void recStepFour() = 0;
public:
    IDrink(double price = 0);
    void reciepe();


};
