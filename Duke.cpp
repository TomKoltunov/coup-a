/**
 * @file Duke.cpp
 * @author Tom Koltunov (tomkoltunov@gmail.com)
 * @brief Implementation code file of "Duke.hpp" file
 * @version 0.1
 * @date 2022-04-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Duke.hpp"
#include "Player.hpp"
#include "Game.hpp"
#include <iostream>
#include <string>

using namespace std;

namespace coup
{
    Duke::Duke(Game& game, string name) : Player(game, name) 
    {
        
    }

    string Duke::role()
    {
        return this->_name;
    }

    void Duke::tax()
    {

    }

    void Duke::block(Player& player)
    {

    }
} 
