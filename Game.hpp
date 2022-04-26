/**
 * @file Game.hpp
 * @author Tom Koltunov (tomkoltunov@gmail.com)
 * @brief Headers file for 'Game' objects
 * @version 0.1
 * @date 2022-04-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Game
{
    public:
        Game();
        string turn();
        vector<string> players();
        string winner();
};