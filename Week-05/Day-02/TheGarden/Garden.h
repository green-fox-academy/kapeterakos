#ifndef EX_02_GARDEN_APP_GARDEN_H
#define EX_02_GARDEN_APP_GARDEN_H

#include <iostream>
#include "plant.h"
#include "time.h"
#include "flower.h"
#include <vector>

class Garden {
public:
    void addPlant(Plant* plant);
    void distributeWater(float waterAmount);
    void printGarden();
private:
    std::vector<Plant*> _plants;
    int _needsWatering = 0;
};


#endif //EX_02_GARDEN_APP_GARDEN_H