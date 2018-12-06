#include <stdio.h>
// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level
typedef enum car_type
{
    VOLVO, TOYOTA, LAND_ROVER, TESLA
}car_type_t;

typedef struct car {
    enum car_type type;
    double km;
    double gas;
}car_t;

char * getType(car_type_t car_type);
void carInfo(car_t car);

int main()

{
    car_t car1;
    car1.type = TOYOTA;
    car1.km = 18765;
    car1.gas = 70;

    carInfo(car1);

    car_t car2;
    car2.type = TESLA;
    car2.km = 10000;
    carInfo(car2);
    return 0;

}
char * getType(car_type_t type){
    if(type == VOLVO)
        return "VOLVO";
    else if(type == TOYOTA)
        return "TOYOTA";
    else if(type == LAND_ROVER)
        return "LAND_ROVER";
    else if(type == TESLA)
        return "TESLA";
}

void carInfo(car_t car){
    printf("Your car is a: %s \n It has got: %.0f KM \n",getType(car.type),car.km);
    if(car.type == TESLA)
        printf(" Tesla is an electric car");
    else
        printf(" The gas level is: %.0f \n",car.gas);
}