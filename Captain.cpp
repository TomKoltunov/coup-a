/**
 * @file Captain.cpp
 * @author Tom Koltunov (tomkoltunov@gmail.com)
 * @brief Implementation code file of "Captain.hpp" file
 * @version 0.1
 * @date 2022-04-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Captain.hpp"
#include "Player.hpp"
#include "Game.hpp"
#include <iostream>
#include <string>

using namespace std;

namespace coup
{
    Captain::Captain(Game& game, string name) : Player(game, name) 
    {

    }

    string Captain::role()
    {
        return this->_name;
    }

    void Captain::steal(Player& player)
    {

    }

    void Captain::block(Player& player)
    {

    }
} 
