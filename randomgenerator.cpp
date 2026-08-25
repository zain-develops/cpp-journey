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


    // A program that will generate random number for three dices
    // Number will be random from (1-6)

    int dice1 = ( rand() % 6 ) + 1;
    int dice2 = ( rand() % 6 ) + 1;
    int dice3 = ( rand() % 6 ) + 1;

    std:: cout << dice1 << std::endl;
    std:: cout << dice2 << std::endl;
    std:: cout << dice3 << std::endl;

    
}
