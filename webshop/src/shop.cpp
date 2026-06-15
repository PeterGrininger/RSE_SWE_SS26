#include "shop.hpp"
#include "product.hpp"
#include <iostream>
#include <memory>
#include <utility>


void Shop::addProduct(uint32_t id, std::unique_ptr<Product> product){
    if (product == nullptr) {
        return;
    }
    catalogue[id] =std::move(product); //unique verschieben

}

void Shop::removeProduct(uint32_t id){
    delete catalogue[id];
    catalogue.erase(id);
}

Product* Shop::getProduct(uint32_t id){
    return catalogue[id];
}

void Shop::listProducts(){
    for (auto& [id, product] : catalogue) {
        std::cout << id << ":" << product->getName() << "\n";
    }
}