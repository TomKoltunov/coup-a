#include "Player.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace coup
{
    class Contessa : public Player
    {
        private:
            Player player;

        public:
            Contessa(Game& game, string name);
            void block(Player& player);
    };
}