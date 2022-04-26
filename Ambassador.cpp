/**
 * @file Ambassador.cpp
 * @author Tom Koltunov (tomkoltunov@gmail.com)
 * @brief Implementation code file of "Ambassador.hpp" file
 * @version 0.1
 * @date 2022-04-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Ambassador.hpp"
#include "Player.hpp"
#include "Game.hpp"
#include <iostream>
#include <string>

using namespace std;

namespace coup
{
    Ambassador::Ambassador(Game& game, string name) : Player(game, name) 
    {

    }

    string Ambassador::role()
    {
        return this->_name;
    }

    void Ambassador::transfer(Player& player1, Player& player2)
    {

    }

    void Ambassador::block(Player& player)
    {

    }
} 
