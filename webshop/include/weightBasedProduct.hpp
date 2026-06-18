#pragma once

#include "product.hpp"
#include "weightBasedItem.hpp"
#include <string>



class WeightBasedProduct : public Product {
public:
    WeightBasedProduct(const std::string& name, double unitprice, double weight);
    double getPrice() override;
    std::unique_ptr<Item>getItem(double quantity) override;
};
