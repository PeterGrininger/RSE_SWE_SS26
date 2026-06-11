#pragma once

#include "product.hpp"
#include <vector>
#include <map>

class Basket {
public:
    void addItem(Product* product, double quantity); //Übergeben eines Pruduktes und Menge (Aber das Produkt nicht die ID wegen den Abhängigkeiten zum Shop)
    void removeItem(Product* product);
    [[nodiscard]] const double checkout() const;
    void printItems() const;
private:
    std::map<Product*, double> items; //MIt map: Schlüssel,Wert -> Pointer bei Gleichem Produkt ist dann gleich und es wird automatisch zusammengefasst
};