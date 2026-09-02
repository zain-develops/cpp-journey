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


    return 0;

}
