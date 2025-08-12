// Lesson 36 - (05/16/2025)
// Creating a simple Machine class to practice Object-Oriented Programming fundamentals.
#include <iostream>
using namespace std;

class Machine {
public:
    string name;
    string type;
    string producer;
    int manufacture_year;
    bool is_on = false; // Off by default

    void turnOn() {
        if (is_on) {
            cout << "The machine " << name << " is already on!" << endl;
            return;
        }
        cout << "The machine " << name << " has been turned on!" << endl;
        is_on = true;
    }

    void turnOff() {
        if (!is_on) {
            cout << "The machine " << name << " is already off!" << endl;
            return;
        }
        cout << "The machine " << name << " has been turned off!" << endl;
        is_on = false;
    }

    void process() {
        if (is_on) {
            cout << "The machine " << name << " is processing your materials!" << endl;
            return;
        }
        cout << "Operation cannot be performed. The machine " << name << " is off!" << endl;
    }

    void show() {
        cout << "-------------------------" << endl;
        cout << "Name: " << name << endl;
        cout << "Type: " << type << endl;
        cout << "Producer: " << producer << endl;
        cout << "Year of Manufacture: " << manufacture_year << endl;
        cout << "On: " << (is_on ? "Yes" : "No") << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    Machine machine1;
    machine1.name = "Laser Cutter X200";
    machine1.type = "Laser Cutting";
    machine1.producer = "Phillips";
    machine1.manufacture_year = 2021;

    Machine machine2;
    machine2.name = "Hydraulic Press PH90";
    machine2.type = "Press";
    machine2.producer = "Bosch";
    machine2.manufacture_year = 2019;

    // Machine 1
    machine1.show();
    machine1.process(); // Off
    machine1.turnOn();
    machine1.process();
    machine1.turnOn();
    machine1.turnOff();

    cout << "\n";

    // Machine 2
    machine2.show();
    machine1.turnOff();
    machine2.turnOn();
    machine2.process();
    machine2.turnOff();

    return 0;
}
