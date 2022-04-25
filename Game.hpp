#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace coup
{
    class Game
    {
        public:
            Game();
            string turn();
            vector<string> players();
            string winner();
    };
}