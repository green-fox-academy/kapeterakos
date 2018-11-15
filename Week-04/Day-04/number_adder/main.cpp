#include <iostream>


int numberadder(int n){
    if(n !=0)
        return n + numberadder(n-1);
    return 0;

}


int main() {
    std::cout<<numberadder(2);
    return 0;
}