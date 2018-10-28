#include <iostream>

int main() {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables

    int secday = 86400;
    int currenthourssec = 14 * 3600;
    int currentminutessec = 34 * 60;
    int sum = currenthourssec + currentminutessec + currentSeconds;
     int remainingsec = secday - sum;

     std::cout<<remainingsec<<std::endl;
    return 0;
}