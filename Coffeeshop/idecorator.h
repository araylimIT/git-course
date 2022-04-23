#pragma once

#include "iproduct.h"

#include <memory>

class IDecorator : public IProduct
{
public:
    IDecorator(IProduct* product = 0, double price = 0);

protected:
    std::shared_ptr<IProduct> m_product_;
};



