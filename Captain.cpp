/**
 * @file Captain.cpp
 * @author Tom Koltunov (tomkoltunov@gmail.com)
 * @brief Implementation code file of "Captain.hpp" file
 * @version 0.1
 * @date 2022-04-27
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
    /*
    The constructor named "Captain" recieves a 'Game' object reference called "game" which represents the game that the created 
    player (Captain) participates and a string called "name" which represents the players's (Captain's) name.
    Since each 'Captain' object is a 'Player' object so the constructor inherites from 'Player' and thus it firstly creates
    'Player' object by using 'Player' class constructor (which by the way recieves the same parameters as the 'Captain' constructor).
    This way each 'Captain' instance has all the 'Player' methods and since all 'Player's attributes are 'protected' access level 
    (and as said 'Captain' inherites from 'Player') - each 'Captain' instance have also this attributes.
    */
    Captain::Captain(Game& game, const string& name) : Player(game, name)
    {

    }

    /*
    The method named "role" recieves no parameters and is overridden from the 'Player' class (since 'Captain' inherites from 'Player').
    The function will return a string which represents the players' role which in this case is 'Captain'.
    */
    string Captain::role()
    {
        return "Captain";
    }

    void Captain::steal(Player& player)
    {

    }

    void Captain::block(Player& player)
    {

    }
} 
