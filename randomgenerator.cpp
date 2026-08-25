#include <iostream>
#include <ctime>

int main(){

    // psuedo-random = Not truly random (But close)
    // It will generate a random number between (0 - 32767)
    // A random number generator
    srand(time(NULL));

    int num1 = rand();
    int num2 = rand();

    std::cout << num1 <<"\n";
    std::cout << num2 <<"\n";

    
}