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

        if (game_1.turn() == "Moshe")
        {
            CHECK_NOTHROW(duke.tax());
            CHECK(duke.coins() == 3);
            CHECK_THROWS(duke.income());

        }
        else if (game_1.turn() == "Yossi")
        {
            CHECK_NOTHROW(duke.tax());
            CHECK(duke.coins() == 3);
            assassin.foreign_aid();
            CHECK(assassin.coins() == 2);
            CHECK_NOTHROW(duke.block(assassin));
            CHECK(assassin.coins() == 0);
        }
        else if (game_1.turn() == "Meirav")
        {
            CHECK_NOTHROW(duke.tax());
            CHECK(duke.coins() == 3);
            ambassador.foreign_aid();
            CHECK(ambassador.coins() == 2);
            CHECK_NOTHROW(duke.block(ambassador));
            CHECK(ambassador.coins() == 0);
        }
        else if (game_1.turn() == "Reut")
        {
            CHECK_NOTHROW(duke.tax());
            CHECK(duke.coins() == 3);
            captain.foreign_aid();
            CHECK(captain.coins() == 2);
            CHECK_NOTHROW(duke.block(captain));
            CHECK(captain.coins() == 0);
        }
        else if (game_1.turn() == "Gilad")
        {
            CHECK_NOTHROW(duke.tax());
            CHECK(duke.coins() == 3);
            contessa.foreign_aid();
            CHECK(contessa.coins() == 2);
            CHECK_NOTHROW(duke.block(contessa));
            CHECK(contessa.coins() == 0);
        }
    }
}