#pragma once

#include "product.hpp"
#include "basket.hpp"
#include <algorithm>
#include <cstdint>
#include <map>
#include <memory.h>
#include <memory>

class Shop {
public:
    void addProduct(uint32_t id,std::unique_ptr<Product> product);
    void removeProduct(uint32_t id);
    std::unique_ptr<Product> getProduct(uint32_t id);
    void listProducts();
private:
    std::map<uint32_t, std::shared_ptr<Product>> catalogue;
};