#include <bits/stdc++.h>
#include <vector>
#include <random>
#include <string>

using namespace std;

#include "weapon.h"
#include "transformer.h"

class megatron : public Transformer {
public:
    magatron() {
        this->name = "megatron";
        this->health = 100; 
        this->weapons = {
            weapon("megatron weapon 1 ", 30, 0.7),
            weapon("megatron weapon 2 ", 40, 0.3)
        };
    }
};

