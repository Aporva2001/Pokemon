using namespace std;
#include<string>

enum class PokemonType;

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