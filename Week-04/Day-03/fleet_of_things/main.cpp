#include <iostream>

#include "fleet.h"

int main(int argc, char* args[])
{
    Fleet fleet;
    // Create a fleet of things to have this output:
    // 1. [ ] Get milk
    // 2. [ ] Remove the obstacles
    // 3. [x] Stand up
    // 4. [x] Eat lunch

    std::string milk ="Get milk";
    std::string obs = "Remove obstacles";
    std::string standup = "Stand up";
    std::string lunch = "Eat lunch";

    milk.complete()
    std::cout << fleet.toString() << std::endl;
    return 0;
}