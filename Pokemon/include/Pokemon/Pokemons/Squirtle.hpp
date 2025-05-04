#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon{
    class Squirtle: public Pokemon
    {
        public:
        Squirtle();
        
        private:
        void WaterSplash(Pokemon &target);
    }
}
