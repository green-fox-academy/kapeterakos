#include <iostream>



int counter(int n)
{
    if(n ==0)
        return 0;
    std::cout<<n<<std::endl;
    counter(n-1);
}
int main() {

    std::cout<<counter(6);
    return 0;
}
