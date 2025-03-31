class BattleManager{
    public:
        void startBattle(Player &player, Pokemon &wildPokemon);
    private:
        void battle(Pokemon &playerPokemon, Pokemon &wildPokemon);
        bool handleBattleOutcome(Player &player, bool playerWon);
};