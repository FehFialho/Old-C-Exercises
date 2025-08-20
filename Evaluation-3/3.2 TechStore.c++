/*  Evaluation 4 - (05/28/2025)
    Implements a Product class with encapsulation, validation in setters, and promotion logic (apply/remove discount, compute final price).
    The main function runs two simple test scenarios.
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Product {
private:
    int id; 
    string name;
    double base_price, discount_percent = 0;
    bool for_sale = false;

public:
    // Use existing setters or assign directly via this->prop = prop
    void setProduct(int id, string name, double base_price, double discount_percent, bool for_sale) {
        this->id = id;
        this->name = name;
        this->base_price = base_price;
        this->discount_percent = discount_percent;
        this->for_sale = for_sale;
    }

    // Getters
    int getId() { 
        return id;
    }
    string getName() { 
        return name;
    }
    double getBasePrice() { 
        return base_price;
    }
    double getDiscount_percent() { 
        return discount_percent;
    }
    bool getForSale() { 
        return for_sale;
    }
    
    double getFinalPrice() {
        if (for_sale) {
            return base_price * (1 - discount_percent);
        }
        return base_price;
    }

    // Setters
    void setName(string new_name) { 
        name = new_name;
    }
    
    void setPrice(double new_price) { 
        if (new_price > 0)
            base_price = new_price; 
        else
            cout << "[Error] Price must be greater than zero!" << endl;
    }
    
    void setOnSale(double discount) { 
        if (discount >= 0.0 && discount <= 1.0) {
            for_sale = true;
            discount_percent = discount; 
        } else {
            cout << "[Error] Discount must be between 0 and 1!" << endl;
        }
    }
    
    void removeSale() {
        for_sale = false;
        discount_percent = 0.0;
    }

    void showDetails() {
        cout << fixed << setprecision(2);
        cout << "===============================" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Base Price: R$" << base_price << endl;
        
        if (for_sale) {
            cout << "Discounted Price: R$" << getFinalPrice() << endl;
        }
        cout << "Discount Percentage: " << discount_percent << endl;
    }
};

int main() {
    // Product Test 1
    cout << ">> TEST 1" << endl;
    
    Product product1;
    product1.setProduct(101, "Notebook Gamer Xtreme", 5500.0, 0.0, false);
    product1.showDetails();
    
    product1.setOnSale(0.15);
    product1.showDetails();
    
    product1.setOnSale(1.02); // invalid (should trigger error)
    product1.removeSale();
    product1.showDetails();
    
    product1.setName("Notebook Gamer Xtreme Pro");
    product1.setPrice(5800);
    product1.showDetails();
    
    // Product Test 2
    cout << "\n>> TEST 2" << endl;
    Product product2;
    product2.setProduct(202, "Smartphone UltraMax", 2800, 0.05, true);
    product2.showDetails();
    
    product2.setOnSale(0.20);
    product2.showDetails();
    
    product2.setPrice(2900);
    product2.showDetails();
    
    product2.removeSale();
    product2.showDetails();
    return 0;
}
