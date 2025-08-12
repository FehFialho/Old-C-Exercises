// Lesson 37 - (05/27/2025)
// Provides setters and getters for each attribute and a method to display the cargo details.
// The main function creates multiple CargoItem objects, sets their attributes, and displays their information.

#include <iostream>
using namespace std;

class CargoItem {
private:
    string id;
    string description;
    double weight;
    double volume;
    string status;
    string origin;
    string destination;
    string expectedDelivery;

public:
    // Setters
    void setCargoItem(string id, string description, double weight, double volume, string status, string origin, string destination, string expectedDelivery) {
        this->id = id;
        this->description = description;
        setWeightKg(weight);
        setVolumeM3(volume);
        setDeliveryStatus(status);
        setOrigin(origin);
        setDestination(destination);
        setExpectedDeliveryDate(expectedDelivery);
    }

    void setDescription(string newDescription) {
        description = newDescription;
    }

    void setWeightKg(double newWeight) {
        if (newWeight > 0) {
            weight = newWeight;
        } else {
            cout << "Invalid weight. Must be greater than zero." << endl;
        }
    }

    void setVolumeM3(double newVolume) {
        if (newVolume > 0) {
            volume = newVolume;
        } else {
            cout << "Invalid volume. Must be greater than zero." << endl;
        }
    }

    void setDeliveryStatus(string newStatus) {
        status = newStatus;
    }

    void setOrigin(string newOrigin) {
        origin = newOrigin;
    }

    void setDestination(string newDestination) {
        destination = newDestination;
    }

    void setExpectedDeliveryDate(string newDate) {
        expectedDelivery = newDate;
    }

    // Getters
    string getId() {
        return id;
    }

    string getDescription() {
        return description;
    }

    double getWeightKg() {
        return weight;
    }

    double getVolumeM3() {
        return volume;
    }

    string getDeliveryStatus() {
        return status;
    }

    string getOrigin() {
        return origin;
    }

    string getDestination() {
        return destination;
    }

    string getExpectedDeliveryDate() {
        return expectedDelivery;
    }

    // Display method
    void showDetails() {
        cout << "============================" << endl;
        cout << "Cargo ID: " << id << endl;
        cout << "Description: " << description << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Volume: " << volume << " m³" << endl;
        cout << "Status: " << status << endl;
        cout << "Origin: " << origin << endl;
        cout << "Destination: " << destination << endl;
        cout << "Expected Delivery Date: " << expectedDelivery << endl;
        cout << "============================" << endl;
    }
};

int main() {
    CargoItem item1;
    item1.setCargoItem("856521", "Gaming Mouse X7 RGB", 0.6, 0.2, "In Warehouse", "Curitiba", "Araucária", "25/05/2025");
    item1.showDetails();

    CargoItem item2;
    item2.setCargoItem("992314", "Dell Latitude 5430 Laptop", 2.5, 0.008, "In Transit", "Rosário do Sul", "Campo Largo", "27/05/2025");
    item2.showDetails();

    CargoItem item3;
    item3.setCargoItem("774812", "Brastemp Frost Free 375L Refrigerator", 50.0, 0.9, "Delayed", "São Paulo", "Barreirinha", "20/05/2025");
    item3.showDetails();

    return 0;
}
