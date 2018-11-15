//
// Created by Akos on 2018. 11. 14..
//

#ifndef PETROL_STATION_CAR_H
#define PETROL_STATION_CAR_H


class Car {
public:
    Car(int gasamount, int capacity);
    bool isFull();
    void fill();

    int getGasAmount() const;
    int GetCapacity() const;


public: int _gasamount;
    int _capacity;
};


#endif //PETROL_STATION_CAR_H
