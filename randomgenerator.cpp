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
    

    // A random event generator that will give us evets based on random numbers
    srand(time(0));

    int randEvent = rand() % 5 + 1;

    switch (randEvent)
    {
    case 1:
        std::cout << "Congratulations! You win a movie ticket. " << "\n";
        break;

    case 2:
        std::cout << "Congratulations! You win 100 bucks. " << "\n";
        break;

    case 3:
        std::cout << "Congratulations! You win an Iphone. " << "\n";
        break;

    case 4:
        std::cout << "Congratulations! You win a Teddy-Bear. " << "\n";
        break;

    case 5:
        std::cout << "Congratulations! You win a Russian." << "\n";
        break;

    }

    
}
