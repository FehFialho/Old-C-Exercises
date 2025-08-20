/*  Evaluation 5 - (05/28/2025)
    Implements a Sensor class with encapsulation, validation for limits, and real-time reading simulation.
    Each sensor checks if the current value is within the defined range and activates an alert if necessary. 
    The main function demonstrates two test cases: Temperature and Pressure.
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Sensor {
private:
    int id; 
    string type, unity;
    double value, min_limit, max_limit;
    bool alert = false;

public:
    void setSensor(int id, string type, string unity, double value, double min_limit, double max_limit, bool alert) {
        this->id = id;
        setType(type);
        setUnity(unity);
        this->value = value;
        this->min_limit = min_limit;
        this->max_limit = max_limit;
        this->alert = alert;
    }

    // Getters
    int getId() { 
        return id;
    }
    string getType() { 
        return type;
    }
    string getUnity() { 
        return unity;
    }
    double getValue() { 
        return value;
    }
    double getMinLimit() { 
        return min_limit;
    }
    double getMaxLimit() { 
        return max_limit;
    }

    // Setters
    void setType(string new_type) { 
        type = new_type;
    }
    void setUnity(string new_unity) { 
        unity = new_unity;
    }
    
    void setLimits(double new_min, double new_max) {
        if (new_min <= new_max) {
            min_limit = new_min;
            max_limit = new_max;
            return;
        }
        cout << "[Error] Minimum must be less than or equal to maximum!" << endl;
    }
	
    void readValue(double read) {
        value = read;
        if (read >= min_limit && read <= max_limit) {
            alert = false;
            return;
        }
        alert = true;
    }
    
    void showStatus() {
        cout << fixed << setprecision(2);
        cout << "===============================" << endl;
        cout << "ID: " << id << endl;
        cout << "Type: " << type << endl;
        cout << "Unit: " << unity << endl;
        cout << "Current Value: " << value << endl;
        cout << "Limits: Min-" << min_limit << " | Max-" << max_limit << endl;
        cout << "Alert: ";
        if (alert) {
            cout << "Activated" << endl;
        } else {
            cout << "Deactivated" << endl;
        }
    }
};

int main() {
    // Sensor Test 1
    cout << ">> SENSOR 1" << endl;
    
    Sensor a;
    a.setSensor(101, "Temperature", "Celsius", 0., 18., 25., false);
    a.showStatus();
    
    cout << "\n----------- TESTS ------------" << endl << endl;
    
    a.readValue(22.5);
    a.showStatus();
    
    a.readValue(15.);
    a.showStatus();
    
    a.readValue(28.);
    a.showStatus();
    
    a.readValue(20);
    a.showStatus();
    
    // Sensor Test 2
    cout << "\n>> SENSOR 2" << endl;
    
    Sensor b;
    b.setSensor(202, "Pressure", "kPa", 0., 90., 110., false);
    b.showStatus();
    
    cout << "\n----------- TESTS --------------" << endl << endl;

    b.readValue(100.5);
    b.showStatus();
    
    b.readValue(85.);
    b.showStatus();
    
    b.readValue(115.);
    b.showStatus();
    
    b.readValue(98.);
    b.showStatus();
    return 0;
}
