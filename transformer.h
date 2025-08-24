#include <bits/stdc++.h>
using namespace std;

#include "weapon.h"

class Transformer {
private:
    string name;
    float health;
    vector<weapon> weapons;

public:
    Transformer(string name, float health, vector<weapon> weapons) {
        this->name = name;
        this->health = health;
        this->weapons = weapons;
    }

    string get_name() const {
        return name;
    }

    float get_health() const {
        return health;
    }

    vector<weapon> get_weapons() const {
        return weapons;
    }
};
