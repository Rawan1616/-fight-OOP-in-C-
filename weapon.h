
#include <bits/stdc++.h>
using namespace std;

#include <string>
#include<vector>
#include<random>


class weapon {
    
private :
    string name ; 
    int damage ; 
    float hit_chance ; 


public :
    weapon(string name , int damage , float hit_chance){
        this->name = name ;
        this->damage = damage;
        this->hit_chance = hit_chance ; 

    }

// 
// getters and setters 

string get_name() const {
    return this->name ; 
}


int  get_damage() const {
    return this->damage ; 
}


float get_hit_chance() const {
    return this->hit_chance ; 
}


};