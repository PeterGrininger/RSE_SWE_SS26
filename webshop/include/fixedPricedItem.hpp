#pragma once

#include "fixedPricedProduct.hpp"
#include "item.hpp"
#include "product.hpp"
#include <memory>

class FixedPriceItem:public Item{
    FixedPriceProduct(std::shared_ptr<Product>product):Item(product){};
    double getPrice() override{}
    double getWeight() override;
};
