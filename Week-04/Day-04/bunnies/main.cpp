#include <iostream>

int bunnycounter(int bunnies ,  int bunnyears){
    if(bunnies==1)
        return 1;
    return bunnies +bunnycounter(bunnies,bunnyears -1);
}



int main() {

    int bunnies = 2;
   const int bunnyears = 2;
    std::cout<<bunnycounter(bunnies,bunnyears);
    return 0;
}