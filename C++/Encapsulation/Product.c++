// Lesson 37 - (05/27/2025)
// This program defines a Product class with many attributes.
// It includes getters, setters with validation, and a method to display product details.

#include <iostream>
#include <iomanip>
using namespace std;

class Product {
private:
    string name;
    double price;
    int stock;
    string barCode;
    string expirationDate;

public:
    void setProduct(string name, double price, int stock, string barCode, string expirationDate) {
        setName(name);
        setPrice(price);
        setStock(stock);
        setBarCode(barCode);
        setExpirationDate(expirationDate);
    }

    // Getters
    string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }

    int getStock() {
        return stock;
    }

    string getBarCode() {
        return barCode;
    }

    string getExpirationDate() {
        return expirationDate;
    }

    // Setters
    void setName(string n) {
        name = n;
    }

    void setPrice(double p) {
        if (p > 0)
            price = p;
        else
            cout << "[Error] Price must be greater than zero!" << endl;
    }

    void setStock(int q) {
        if (q >= 0)
            stock = q;
        else
            cout << "[Error] Stock quantity cannot be negative!" << endl;
    }

    void setBarCode(string cb) {
        barCode = cb;
    }

    void setExpirationDate(string dv) {
        expirationDate = dv;
    }

    void showDetails() {
    	cout << fixed << setprecision(2);
        cout << "===============================" << endl;
        cout << "Name: " << name << endl;
        cout << "Price: R$" << price << endl;
        cout << "Stock Quantity: " << stock << endl;
        cout << "Barcode: " << barCode << endl;
        cout << "Expiration Date: " << expirationDate << endl;
        cout << "===============================" << endl;
    }
};

int main() {
    Product product1;
    product1.setProduct("Milk", 3.80, 540, "53918591", "28/06/2025");
    product1.setStock(1000);
    product1.showDetails();

	Product product2;
    product2.setProduct("Cookie", 5.20, 240, "97557591", "02/07/2025");
    product2.showDetails();
    
    Product product3;
    product3.setProduct("Picanha Steak", 39.99, 90, "85363113", "10/06/2025");
    product3.showDetails();

    return 0;
}