#include<iostream>
#include"BattleManager.hpp"
using namespace std;

    void BattleManager :: battle(Pokemon &playerPokemon, Pokemon &wildPokemon) {
        cout<< "A wild " << wildPokemon.name << " appeared!\\n";
    
        while (!playerPokemon.isFainted() && !wildPokemon.isFainted()) {
            playerPokemon.attack(wildPokemon); // Player attacks first
    
            if (!wildPokemon.isFainted()) {
                wildPokemon.attack(playerPokemon); // Wild Pokémon attacks back
            }
        }
    
        if (playerPokemon.isFainted()) {
            cout << playerPokemon.name << " has fainted! You lose the battle.\\n";
        } else {
            cout << "You defeated the wild " << wildPokemon.name << "!\\n";
        }
    }

    void BattleManager :: startBattle(Player &player, Pokemon &wildPokemon){
        cout << "A wild " << wildPokemon.name << " appeared!\n";
        battle(player.chosenPokemon, wildPokemon);
    }

    void BattleManager :: battle(Pokemon &playerPokemon, Pokemon &wildPokemon){
        while (!playerPokemon.isFainted() && !wildPokemon.isFainted()) {
            // Player attacks first
            playerPokemon.attack(wildPokemon);
    
            // Check if wild Pokémon fainted
            if (!wildPokemon.isFainted()) {
                // Wild Pokémon attacks back
                wildPokemon.attack(playerPokemon);
            }
    
            // Pause to show the result of each turn
            Utility::waitForEnter();
        }
        // Determine and display the outcome of the battle
        handleBattleOutcome(playerPokemon, playerPokemon.isFainted());
    }
    void BattleManager :: handleBattleOutcome(Player &player, bool playerWon){
        if(playerWon){
            cout<<player.chosenPokemon.name<<" is victorious. Keep an eye on your Pokemon's health";
        }
        else{
            cout<<"Oh no! "<< player.chosenPokemon.name<<" fainted! You need to visit the PokeCenter.";
        }
        Utility:: waitForEnter();
        cout<<"Game over \n";
        
    }