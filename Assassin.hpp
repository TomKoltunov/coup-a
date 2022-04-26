#include "Player.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace coup
{
    class Assassin : public Player
    {
        private:
            Player player;

        public:
            Assassin(Game& game, string name);
    };
}