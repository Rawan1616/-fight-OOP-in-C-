#include <bits/stdc++.h>
#include <vector>
#include <random>
#include <string>

using namespace std;

#include "weapon.h"
#include "transformer.h"

class optimus : public Transformer {
public:
    optimus() {
        this->name = "optimus";
        this->health = 100; 
        this->weapons = {
            weapon("optimus Weapon 1", 10, 0.5),
            weapon("optimus Weapon 2", 20, 0.6)
        };
    }
};
