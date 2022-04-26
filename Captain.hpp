#include "Player.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace coup
{
    class Captain : public Player
    {
        private:
            Player player;

        public:
            Captain(Game& game, string name);
            void steal(Player& player);
            void block(Player& player);
    };
}