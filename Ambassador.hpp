#include "Player.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace coup
{
    class Ambassador : public Player
    {
        private:
            Player player;

        public:
            Ambassador(Game& game, string name);
            void transfer(Player& player1, Player& player2);
            void block(Player& player);
    };
}