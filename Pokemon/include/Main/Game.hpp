#include "./Pokemon/Grass.hpp"

class Player;
namespace N_Main{
	class Game {
		private:
			Grass forestGrass;
		public:
		Game();
		void gameLoop(Player& player);
	};
}
