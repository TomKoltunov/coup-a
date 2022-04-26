#include "Player.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace coup
{
    class Duke : public Player
    {
        private:
            Player player;

        public:
            Duke(Game& game, string name);
            void tax();
            void block(Player& player);
    };
}