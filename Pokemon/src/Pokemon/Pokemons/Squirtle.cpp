#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {
    using namespace std;
    
    Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::GRASS, 100, 35) {}
    
    void Squirtle::waterSplash(Pokemon &target) {
      cout << name << " uses Water splash on " << target.name << "!\n";
      target.takeDamage(20);
    }
    void Squirtle::attack(Pokemon *target){
      waterSplash(target);
    }
  }
}