#include <iostream>

#include "DiceSet.h"
#include <vector>

int main(int argc, char *args[]) {
    // You have a `DiceSet` class which has a list for 6 dices
    // You can roll all of them with roll()
    // Check the current rolled numbers with getCurrent()
    // You can reroll with roll()
    // Your task is to roll the dices until all of the dices are 6
    DiceSet diceSet;
    diceSet.roll();



    int i = 0;


    while (diceSet.getCurrent(i) != 6 || i < 6) {


        if (diceSet.getCurrent(i) == 6) {
            std::cout << diceSet.getCurrent(i) << std::endl;
            i++;

        }
        diceSet.roll(i);

    }


    return 0;
}