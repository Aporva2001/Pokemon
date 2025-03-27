using namespace std;
#include<string>
#include"PokemonType.hpp"

class Pokemon{
public:
  string name;
  PokemonType type;
  int health;
  
  Pokemon();

  // Parameterized constructor
  Pokemon(string p_name, PokemonType p_type, int p_health);

  // Copy constructor
  Pokemon(const Pokemon &other);

  // Destructor
  ~Pokemon();
  
  void attack();
};