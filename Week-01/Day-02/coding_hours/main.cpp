#include <iostream>

int main() {



    // An average Green Fox attendee codes 6 hours daily
    // The semester is 17 weeks long
    //
    // Print how many hours is spent with coding in a semester by an attendee,
    // if the attendee only codes on workdays.
    //
    // Print the percentage of the coding hours in the semester if the average
    // working hours weekly is 52

    float workhoursperweek = 52;
    float numberofweeks = 17;
    float numberofworkhours = 6*5*17;
    float codinghoursperecent = workhoursperweek/ numberofweeks *100 ;

    std::cout << numberofworkhours << std::endl;

    std::cout << codinghoursperecent << std::endl;



    return 0;
}