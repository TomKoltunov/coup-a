/**
 * @file Test.cpp
 * @author Tom Koltunov (tomkoltunov@gmail.com)
 * @brief Test cases for the project
 * @version 0.1
 * @date 2022-04-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "doctest.h"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"

using namespace doctest;
using namespace std;
using namespace coup;

TEST_CASE("")
{
    SUBCASE("")
    {
        Game game_1{};
        Duke duke{game_1, "Moshe"};
	    Assassin assassin{game_1, "Yossi"};
	    Ambassador ambassador{game_1, "Meirav"};
	    Captain captain{game_1, "Reut"};
	    Contessa contessa{game_1, "Gilad"};

        for (int i = 1; i <= 20; i++)
        {
            CHECK_NOTHROW(captain.income());
        }
    }
}