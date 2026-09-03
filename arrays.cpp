#include <iostream>

int main (){


    //arrays
    int array[] = { 10 , 20 , 30 , 40 , 50 };
     std::cout << array[0] << " :)\n";
     std::cout << array[1] << " :)\n";
     std::cout << array[2] << " :)\n";
     std::cout << array[3] << " :)\n";
     std::cout << array[4] << " :)\n";

    //sizeof() operator
    int num = 12;
    double dec = 4.34;
    std::string name = "Bro";
    bool right = true;
    char grade = 'B';
    std::string clubs[] = { "Real madrid" , "Chelsea" , "Bayern Munich" };

    std::cout << sizeof(num) << "Bytes\n";
    std::cout << sizeof(dec) << "Bytes\n";
    std::cout << sizeof(name) << "Bytes\n";
    std::cout << sizeof(right) << "Bytes\n";
    std::cout << sizeof(grade) << "Bytes\n";
    std::cout << sizeof(clubs) << "Bytes\n";


    //iterate over an array
    std::string players[] = {"Ronaldo", "Messi", "Neymar"};

    for(int i = 0 ; i < 3 ; i++){
        std::cout << players[i] <<"\n";
    }


    //A better approach for this is to use sizeof() operator
    std::string newplayers[] = {"Mbappe", "Haaland", "Bellingham"};

    for( int i = 0 ; i < sizeof(newplayers)/sizeof(std::string) ; i++){
        std::cout << newplayers[i] <<"\n";
    }


    //Another example
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for( int i = 0 ; i < sizeof(grades)/sizeof(char) ; i++){
        std::cout << grades[i] <<"\n";
    }


    // foreach loop = loop that eases the traversal over an iterable data set
    //A better and easy way is to use foreach loop
    int marks[] = {34, 43, 65, 78, 89};

    for(int scores : marks){
        std::cout << scores <<"\n";
    }
    
    return 0;

}
