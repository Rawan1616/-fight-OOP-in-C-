class Transformer {
protected:
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

    void takeDamage(float damage) {
        this->health -= damage;
        if (this->health < 0) {
            this->health = 0;
        }
    }

    bool attack(Transformer& target, const weapon& weapon, mt19937& rng) {
        uniform_real_distribution<double> dist(0.0, 1.0);
        double randomNumber = dist(rng);

        if (randomNumber < weapon.get_hit_chance()) {
            int damage = weapon.get_damage();
            target.takeDamage(damage);
            return true;
        } else {
            return false;
        }
    }
};























int main() {

    random_device rd;
    mt19937 rng(rd());

    // players instances 
    megatron megatron ; 
    optimus optimus ; 

    
     cout << " the battle has started" ; 
     bool optimus_turn = true ; 
   
     Transformer * defend ; 
     Transformer * attack ; 

     while ( megatron.get_health() > 0 && optimus.get_health() > 0)
     {
        if(optimus_turn ){
            attack = &optimus ; 
            defend = &megatron ; 
        }
        else{
            attack = &megatron ; 
            defend = &optimus ; 
        }

        vector<weapon> weapons = attack->get_weapons();
        int index = rng() % weapons.size();
        weapon selected_weapon = weapons[index];

        cout << "attaker is " << attack->get_name() << "his weapon is " << selected_weapon.get_name() << endl ;

        bool shot = attack->attack(*defend , selected_weapon, rng);


        if(shot){
            cout << defend->get_name() << "takes " << selected_weapon.get_damage() << "by tha attacker" << attack->get_name() << endl  ; 
        }
        else{
            cout << attack->get_name() << "missed the shot " << endl ;
        }

        cout << defend->get_name() << "has health " << defend->get_health() << endl ; 

       optimus_turn = !optimus_turn;

     }
     
    if (optimus.get_health() > 0 )
{
    cout << "the battle has ended and (optimus) is the winner " << endl ;

}
else{

    cout << "the battle has ended and (megatron) is the winner ";
}
 
     
}

