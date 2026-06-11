#include "fixedPricedProduct.hpp"
#include "product.hpp"
#include <string>

FixedPriceProduct::FixedPriceProduct(const std::string& name, double unitprice, double weight):Product(name, unitprice, weight) //Mit ":" Konstrulktor der Basisklasse aufrufen
{


}

double FixedPriceProduct::getPrice(){
    return getUnitPrice();

}