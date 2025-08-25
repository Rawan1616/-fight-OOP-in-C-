#include <bits/stdc++.h>
#include <vector>
#include <random>
#include <string>

using namespace std;

#include "weapon.h"
#include "transformer.h"
#include "megatron.h"
#include "optimus.h"



#include <bits/stdc++.h>
#include "optimus.h"
#include "optimus.cpp"
#include "megatron.h"
using namespace std;

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

     while ( megatron.get_health > 0 && optimus.get_health)
     {
        if(optimus_turn ){
            attack = &optimus ; 
            defend = &megatron ; 
            vector <weapon>  = optimus.get_weapons ; 
        }
        else{
            attack = &megatron ; 
            defend = &optimus ; 
            vector <weapon>  = megatron.get_weapons ; 

        }

        int index = rng() % weapons.size();
        weapon weapon = weapons[index];

        cout << "attaker is " << attack->get_name() << "his weapon is " << weapon.get_name() << endl ;

        bool shot = attack->attack(*defend , weapon  , rng);


        if(shot){
            cout << defend->get_name << "takes " << weapon.get_damage << "by tha attacker" << attack->get_name << endl  ; 
        }
        else{
            cout << attack->get_name << "missed the shot " << endl ;
        }

        cout << defend->get_name << "has health " << defend->get_health << endl ; 

       optimus_turn != optimus_turn ;

     }
    if (optimus.get_health() > 0 )
{
    cout << "the battle has ended and (optimus) is the winner " << endl ;

}
else{

    cout << "the battle has ended and (megatron) is the winner "
}
 
     
}


