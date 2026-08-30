#include <iostream>
#include <ctime>


char playerchoice();

char computerchoice();

void showchoice(char choice);

void showwinner(char player, char computer);


int main(){

    srand(time(NULL));
    
    char player;
    char computer;
    
    player = playerchoice();
    std::cout <<"Your choice :";
    showchoice(player);

    computer = computerchoice();
    std::cout << "Computer choice: ";
    showchoice(computer);
    showwinner(player, computer);




    return 0;
    
}

char playerchoice(){
    char choice;

    std::cout << "**********************\n";
    std::cout << "Choose any of the one : \n";
    std::cout << "**********************\n";
    std::cout << "r = rock\n";
    std::cout << "p = paper\n";
    std::cout << "s = scissors\n";

    std::cin >> choice;
    

    return choice;
    
}

char computerchoice(){
    
    int num = rand() % 3 + 1;

    switch (num)
    {
        case 1:
            return 'r';

        case 2:
            return 'p';

        case 3:
            return 's';
    
    }   
}

void showchoice(char choice){
    switch (choice)
    {
    case 'r':
        std::cout <<" Rock\n";
        break;
    
    case 'p':
        std::cout <<" Paper\n";
        break;
    
    case 's':
        std::cout <<" Scissors\n";
        break;
    
    default:
        std::cout <<" Invalid choice!\n";
        break;
    }

}

void showwinner(char player, char computer){

    switch (player)
    {
    case 'r': if(computer == 's'){
            std::cout << "You win.\n";
    }

    else if(computer == 'p'){
            std::cout << "You lose.\n";
    }

    else{
         std::cout << "It's a draw.\n";
    }
        break;

    case 'p': if(computer == 'r'){
            std::cout << "You win.\n";
    }

    else if(computer == 's'){
            std::cout << "You lose.\n";
    }

    else{
         std::cout << "It's a draw.\n";
    }
        break;

    case 's': if(computer == 'p'){
            std::cout << "You win.\n";
    }

    else if(computer == 'r'){
            std::cout << "You lose.\n";
    }

    else{
         std::cout << "It's a draw.\n";
    }
        break;
    
}

}