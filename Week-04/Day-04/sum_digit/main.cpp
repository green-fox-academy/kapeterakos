#include <iostream>
int sum(int n){
  if(n ==0)
      return 0;
    return (n%10 + sum(n/10));

}
int main() {
    int number = 123;
    int sumofnumbers =sum(number);
    std::cout<<"The number is: "<<number<<" "<<"The sum of it's digits is: "<<sumofnumbers<<std::endl;
    return 0;
}