#ifndef IDRINK_H
#define IDRINK_H

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

#endif // IDRINK_H
