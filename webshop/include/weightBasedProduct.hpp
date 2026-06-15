#pragma once

#include "product.hpp"
#include <string>

class WeightPriceProduct: public Product {
public:
    WeightPriceProduct(const std::string& name, double unitprice, double weight): Product(name, unitprice, weight){} //ich brauche namen unitprice und weight
    double getPrice() override{
        return getUnitprice();
    }
// private:
//     ???
};