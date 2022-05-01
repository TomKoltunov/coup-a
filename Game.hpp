/**
 * @file Game.hpp
 * @author Tom Koltunov (tomkoltunov@gmail.com)
 * @brief Headers file for 'Game' objects
 * @version 0.1
 * @date 2022-04-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Game
{
    public:
        Game();
        static string turn();
        static vector<string> players();
        static string winner();
};