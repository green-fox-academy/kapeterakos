#include <iostream>
int countpower(int base , int n){

    if(n !=0 )
    return (base*countpower(base,n-1));
    return 1;
}
int main() {
    int base , n;

    std::cout<<"Give me a base number"<<std::endl;
    std::cin>>base;

    std::cout<<"Give me a power number(positive)"<<std::endl;
    std::cin>>n;

   int result = countpower(base,n);

    std::cout <<result<< std::endl;
    return 0;
}