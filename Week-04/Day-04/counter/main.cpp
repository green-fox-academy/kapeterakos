#include <iostream>



int counter(int n)
{
    if(n ==0)
        return 0;
    std::cout<<n<<std::endl;
    counter(n-1);
}
int main() {
    int num = 5;
    std::cout<<counter(num);
    return 0;
}
