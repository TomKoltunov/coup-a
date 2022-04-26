/**
 * @file Contessa.hpp
 * @author Tom Koltunov (tomkoltunov@gmail.com)
 * @brief Headers file for 'Contessa' objects
 * @version 0.1
 * @date 2022-04-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Player.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace coup
{
    class Contessa : public Player
    {
        public:
            Contessa(Game& game, string name);
            string role();
            void block(Player& player);
    };
}