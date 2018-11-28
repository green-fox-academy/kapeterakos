#include <iostream>
#include <ctime>


void TheGame(int &max, int &min, int &num);

void randomnumber(int &max, int &min, int &num);

int main() {
    int maxn = 0, minn = 0, randn = 0;
    randomnumber(maxn, minn, randn);
    // std::cout<<randn<<std::endl;
    TheGame(maxn, minn, randn);
    return 0;
}


void randomnumber(int &max, int &min, int &num) {
    std::cout << "Give a max number for range" << std::endl;
    std::cin >> max;
    std::cout << "Give a min number for range" << std::endl;
    std::cin >> min;
    srand((int) time(0));
    int range = max - min + 1;
    num = rand() % range + min;
}

void TheGame(int &max, int &min, int &num) {
    int input;
    int lives = 5;
    std::cout << "I've the number between " << min << " - " << max << "  You have " << lives << " lives." << std::endl;
    while (lives > 0) {
        std::cout << "Guess the number" << std::endl;
        std::cin >> input;
        if (input != num && input > num) {
            lives--;
            std::cout << "Too high , you have " << lives << " lives left" << std::endl;
        }
        if (input != num && input < num) {
            lives--;
            std::cout << "Too low , you have " << lives << " lives left" << std::endl;
        }
        if (lives == 0) {
            std::cout << "Game Over " << " The number was: " << num << std::endl;
            std::cout << "Do you want to restart ? yes/no" << std::endl;
            std::string restart;
            std::cin >> restart;
            if (restart == "yes") {
                lives += 5;
                std::cout << "Give a max number for range" << std::endl;
                std::cin >> max;
                std::cout << "Give a min number for range" << std::endl;
                std::cin >> min;
                int range = max - min + 1;
                num = rand() % range + min;
            } else
                break;

        } else if (input == num) {
            std::cout << "You have won" << std::endl;
            std::cout << "Do you want to restart ? yes/no" << std::endl;
            std::string restart;
            std::cin >> restart;
            if (restart == "yes") {
                lives += 5;
                std::cout << "Give a max number for range" << std::endl;
                std::cin >> max;
                std::cout << "Give a min number for range" << std::endl;
                std::cin >> min;
                int range = max - min + 1;
                num = rand() % range + min;
            } else
                break;
        }
    }
}
