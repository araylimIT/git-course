#pragma once
class IProduct
{
protected:
    const double price_;
public:
    IProduct(double price = 0);
    virtual double price() = 0;
    virtual ~IProduct() {}


};


