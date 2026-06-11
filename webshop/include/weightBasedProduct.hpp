#pragma once
#include "product.hpp"
#include <string>

class WeightBasedProduct : public Product {
public:
    // Konstruktor: Name, Preis pro kg, Gewicht der Portion/Auswahl in kg
    WeightBasedProduct(const std::string& name, double pricePerKg, double weight);
    
    // Überschreiben der virtuellen Methode aus Product
    double getPrice() override;

private:
    double pricePerKg;
    double weight;
};