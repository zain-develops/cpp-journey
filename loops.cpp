#include <iostream>

int main(){

   //loops
   for (int i = 0; i <= 5; i++)
   {
    std::cout << "I love donuts." <<std::endl;
   }
   
   for (int i = 0; i <= 10; i++)
   {
    std::cout << i <<std::endl;
   }
   
    std::cout << "End!";

    //while loops is used when u wanna run run your code multiple times , it can run infinite times
    std::string name;
    while ( name.empty())
    {
        std::cout << "Enter a name : ";
        std::getline(std::cin , name);
    }



}
