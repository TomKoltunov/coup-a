/**
 * @file Duke.cpp
 * @author Tom Koltunov (tomkoltunov@gmail.com)
 * @brief Implementation code file of "Duke.hpp" file
 * @version 0.1
 * @date 2022-04-27
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
    /*
    The constructor named "Duke" recieves a 'Game' object reference called "game" which represents the game that the created 
    player (Duke) participates and a string called "name" which represents the players's (Duke's) name.
    Since each 'Duke' object is a 'Player' object so the constructor inherites from 'Player' and thus it firstly creates
    'Player' object by using 'Player' class constructor (which by the way recieves the same parameters as the 'Duke' constructor).
    This way each 'Duke' instance has all the 'Player' methods and since all 'Player's attributes are 'protected' access level 
    (and as said 'Duke' inherites from 'Player') - each 'Duke' instance have also this attributes.
    */
    Duke::Duke(Game& game, const string& name) : Player(game, name)
    {
        
    }

    /*
    The method named "role" recieves no parameters and is overridden from the 'Player' class (since 'Duke' inherites from 'Player').
    The function will return a string which represents the players' role which in this case is 'Duke'.
    */
    string Duke::role()
    {
        return "Duke";
    }

    void Duke::tax()
    {

    }

    void Duke::block(Player& player)
    {

    }
} 
