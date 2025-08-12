// Lesson 37 - (05/27/2025)
// Demonstrates encapsulation by controlling access to price and sale status.
#include <iostream>
using namespace std;

class Product {
private:
    double price;
    bool onSale = false;

public:
    
    string type;
    string brand;
    string model;
    
    // Getters
    string getType() {
        return type;
    }

    string getBrand() {
        return brand;
    }

    string getModel() {
        return model;
    }

    double getPrice() {
        return price;
    }

    bool isOnSale() {
        return onSale;
    }

    // Setters
    void setPrice(double newPrice) {
        if (newPrice > 0) {
            price = newPrice;
        } else {
            cout << "Invalid price! Must be greater than zero." << endl;
        }
    }

    void setOnSale(bool saleStatus) {
        onSale = saleStatus;
    }

    void setProduct(string type, string brand, string model, double price, bool onSale) {
        this->type = type;
        this->brand = brand;
        this->model = model;
        setPrice(price);
        setOnSale(onSale);
    }

    void showDetails() {
        cout << "===============================" << endl;
        cout << "Type: " << type << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "On Sale: " << (onSale ? "YES" : "NO") << endl;
        cout << "===============================" << endl;
    }
};

int main() {
    Product product1;
    product1.setProduct("Video Card", "NVIDIA", "RTX 4070", 4299.99, false);
    product1.showDetails();

    Product product2;
    product2.setProduct("SSD", "Samsung", "970 EVO Plus 1TB", 599.90, true);
    product2.showDetails();

    Product product3;
    product3.setProduct("Power Supply", "Redragon", "RM750x 750W", 799.50, false);
    product3.setPrice(749.90); 
    product3.setOnSale(true);  
    product3.showDetails();

    return 0;
}
