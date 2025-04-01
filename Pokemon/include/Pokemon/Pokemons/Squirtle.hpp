#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon{
    class Squirtle: public Pokemon
    {
        public:
        Squirtle();
        
        void attack(Pokemon *target) override;
        private:
        void waterSplash(Pokemon &target);
    }
}
