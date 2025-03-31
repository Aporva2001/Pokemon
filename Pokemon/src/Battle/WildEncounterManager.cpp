#include "WildEncounterManager.hpp"
#include <cstdlib> // For rand()
#include <ctime>   // For time()
namespace N_Battle{
WildEncounterManager::WildEncounterManager() {
    srand(time(0)); // Seed the random number generator
}

WildPokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass) {
    int randomIndex = rand() % grass.wildPokemonList.size();
    return grass.wildPokemonList[randomIndex];
}
}