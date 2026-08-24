#include <iostream>

int main(){

    //nested loops
    //we print the table of 5 three times using nested loops
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 3; j <= 30; j+=3)
        {
            std::cout << j << " ";
        }
       std::cout <<"\n";
    }
    
    //This code will print out any character you want into numbers of rows or columns of your choice
    int rows;
    int columns;
    char symbol;

    std::cout <<"Enter number of rows : ";
    std::cin >> rows;

    std::cout <<"Enter number of columns : ";
    std::cin >> columns;

    std::cout <<"Enter symbol : ";
    std::cin >> symbol;


    for (int i = 1; i <= rows ; i++)
    {
        for (int j = 1; j <= columns ; j++)
        {
            std::cout << symbol ;
        }
       std::cout <<"\n";
    }
    
   
    

}
