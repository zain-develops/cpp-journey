#include <iostream>
#include <cmath>
#include <vector>

int main(){

    std::string name;
    std::string food;
    
    std::cout <<"What's your name?";
    std::getline(std::cin , name);
    std::cout <<"What's your favourite food?";
    std::cin >> food;

    std::cout << "Hello " << name <<"\n";
    std::cout << "Nice taste! " << food << "\n";

    //std::getline() is used when the input contain whitespaces
    std::string score;

    //getline is used when you write something that contain spaces like "I like pizza"
    //std::ws is used to eliminate new line character so we can enter our input 
    std::cout << "What's your score in Maths and History respectively?";
    std::getline(std::cin >> std::ws , score);

    std::cout << "Marks :" << score <<"\n";

     return 0;
}
