// Lesson 36 - (05/16/2025)
// Creating a simple Dog class to learn Object-Oriented Programming fundamentals.

#include <iostream>
using namespace std;

class Dog {
public:
    string name;
    string breed;
    string fur_color;
    int age;

    void bark() {
        cout << "The dog " << name << " is barking!" << endl;
    }

    void eat() {
        cout << name << " is eating its food." << endl;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Breed: " << breed << endl;
        cout << "Fur Color: " << fur_color << endl;
        cout << "Age: " << age << " years" << endl;
    }
};

int main() {
    // Dog 1
    Dog dog1;
    dog1.name = "Serafim";
    dog1.breed = "Labrador";
    dog1.fur_color = "White";
    dog1.age = 6;

    // Dog 2
    Dog dog2;
    dog2.name = "Artemis";
    dog2.breed = "Mixed Breed";
    dog2.fur_color = "Black";
    dog2.age = 3;

    dog1.bark();
    dog2.bark();

    cout << "\n";
    dog1.eat();
    dog2.eat();

    cout << "\n";
    dog1.show();
    cout << "\n";
    dog2.show();

    return 0;
}
