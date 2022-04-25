#include "Game.hpp"
#include <iostream>
#include <string>

using namespace std;

namespace coup
{
    class Player
    {
        protected:
            Game _game;
            string _name;
            int _money;
            bool _isInGame;

        public:
            Player(Game game, string name) : _game(game), _name(name), _money(0), _isInGame(true) {}; // Need to choose this constructor or the one below
            Player(Game, string); // Need to choose this constructor or the one above
            void income();
            void foreign_aid();
            void coup(Player& other);
            string role(Player& player);
            int coins();
    };
} 
