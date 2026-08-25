#include <iostream>
#include <ctime>


int main(){

    int number , guess , tries = 0;
    
    srand(time(NULL));
    number = (rand() % 100) + 1;

    std::cout << "******NUMBER GUESSING GAME******\n";
    
    do
    {
        std::cout << "Enter a guess number between (1-100) : ";
        std::cin >> guess;
        tries++;

        if ( guess > number )
        {
            std::cout << "TOO HIGH!\n";
        }

        else if ( guess < number )
        {
            std::cout << "TOO LOW!\n";
        }

        else
        {
            std::cout <<"CORRECT! No. of tries : " << tries << "\n"; 
        }
        
    } while ( number != guess );
    
    std::cout << "********************************";

}