// Lesson 36 - (05/16/2025)
// This program defines a simple Pokemon class with attributes such as name, types, level, current and maximum HP. 
// It includes methods to heal, receive damage, attack another Pokemon, and display information.
// The main function creates two Pokemon and simulates a battle between them.

#include <iostream>
using namespace std;

class Pokemon {
public:
    string name;
    string primaryType;
    string secondaryType = "";
    int level;
    int atualHP;
    int maxHP;

    void heal(int hp) {
        cout << name << " healed " << hp << " HP points!" << endl;
        atualHP += hp;
        if (atualHP > maxHP) {
            atualHP = maxHP;
            cout << name << " is at maximum HP." << endl;
        }
    }

    void receiveDamage(int damage) {
        cout << name << " took " << damage << " damage!" << endl;
        atualHP -= damage;
        if (atualHP <= 0) {
            atualHP = 0;
            cout << name << " fainted." << endl;
        } else {
            cout << "Remaining HP: " << atualHP << endl;
        }
    }

    void attack(Pokemon target, string move) {
        cout << "The Pokemon " << name << " attacked " << target.name << " with " << move << "!" << endl;
    }

    void showInfo() {
        cout << "-------------------------" << endl;
        cout << "Name: " << name << endl;
        cout << "Types: " << primaryType;
        if (!secondaryType.empty()) {
            cout << ", " << secondaryType;
        }
        cout << endl;
        cout << "Level: " << level << endl;
        cout << "HP: " << atualHP << "/" << maxHP << endl;
    }
};

int main() {
    // Mawile
    Pokemon mawile;
    mawile.name = "Mawile";
    mawile.primaryType = "Steel";
    mawile.secondaryType = "Fairy";
    mawile.level = 23;
    mawile.maxHP = 69;
    mawile.atualHP = 69;

    // Meowstic
    Pokemon meowstic;
    meowstic.name = "Meowstic";
    meowstic.primaryType = "Psychic";
    meowstic.level = 31;
    meowstic.maxHP = 92;
    meowstic.atualHP = 92;

    mawile.showInfo();
    meowstic.showInfo();

    cout << "\n===== Battle Started =====\n\n";

    // Turn 1
    mawile.attack(meowstic, "Iron Head");
    meowstic.receiveDamage(36);
    cout << "\n" << endl;

    // Turn 2
    meowstic.heal(20);
    cout << "\n" << endl;

    // Turn 3
    mawile.attack(meowstic, "Crunch");
    meowstic.receiveDamage(34);
    cout << "\n" << endl;

    // Turn 4 
    meowstic.attack(mawile, "Confusion");
    mawile.receiveDamage(32);
    cout << "\n" << endl;

    // Turn 5
    mawile.attack(meowstic, "Iron Head");
    meowstic.receiveDamage(37);
    cout << "\n" << endl;

    // Turn 6
    meowstic.attack(mawile, "Psybeam");
    mawile.receiveDamage(38);
    cout << "\n" << endl;

    cout << "===== End of Battle ======\n\n";
    mawile.showInfo();
    meowstic.showInfo();

    return 0;
}
