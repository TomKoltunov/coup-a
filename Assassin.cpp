/**
 * @file Assassin.cpp
 * @author Tom Koltunov (tomkoltunov@gmail.com)
 * @brief Implementation code file of "Assassin.hpp" file
 * @version 0.1
 * @date 2022-04-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Assassin.hpp"
#include "Player.hpp"
#include "Game.hpp"
#include <iostream>
#include <string>

using namespace std;

namespace coup
{
    Assassin::Assassin(Game& game, string name) : Player(game, name) 
    {

    }

    void Assassin::coup(Player& other)
    {

    }

    string Assassin::role()
    {
        return this->_name;
    }
} 
