#include"Game.hpp"

Game::Game() { 
    // Create a sample grass environment with actual Pokemon objects 
    forestGrass = {"Forest", 
                            {Pokemon("Pidgey", PokemonType::NORMAL, 40), 
                            Pokemon("Caterpie", PokemonType::BUG, 35), 
                            Pokemon("Zubat", PokemonType::POISON, 30)}, 
                            70}; 
     }
    